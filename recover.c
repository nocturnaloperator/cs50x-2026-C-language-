#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    // Open input file
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    uint8_t buffer[512];

    FILE *output = NULL;
    char filename[8];
    int file_count = 0;

    // Read blocks
    while (fread(buffer, 1, 512, input) == 512)
    {
        // Check JPEG signature
        if (buffer[0] == 0xff &&
            buffer[1] == 0xd8 &&
            buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // If already writing a file → close it
            if (output != NULL)
            {
                fclose(output);
            }

            // Create new file
            sprintf(filename, "%03i.jpg", file_count);
            output = fopen(filename, "w");

            file_count++;
        }

        // If we found a JPEG, keep writing
        if (output != NULL)
        {
            fwrite(buffer, 1, 512, output);
        }
    }

    // Close remaining files
    if (output != NULL)
    {
        fclose(output);
    }

    fclose(input);
    return 0;
}

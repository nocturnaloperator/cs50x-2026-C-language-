#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

int hash(char* word);

int main(void)
{
    char *word= get_string("word :");
    printf("hash value : %i\n", hash(word));

}
  // Hash the word based on the first two letters of the word

  int hash(char *word)
  {
    //word is less than 2 letters
    if(word==NULL || strlen(word)<2)
    {
        return -2;
    }

    char c = word[0];
    char c1 = word[1];

    if(isalpha(c) && isalpha(c1))
    {
        c=toupper(c);
        c1=toupper(c1);
        return(c - 'A') *100 +c1-'A';
    }

    return -1;
  }

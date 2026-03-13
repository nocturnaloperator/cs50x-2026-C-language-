#include<stdio.h>
#include<cs50.h>
int main(void)
{
  int height;
  //ask for  height
  do
  {
    height = get_int("height: ");
  }
  while(height <1 || height>8);

  //print pyramid
  for(int i=0; i<height; i++)
  {
    //print spaces
    for(int j=0; j<height - i -1; j++)
    {
        printf(" ");
    }
    // print hashes
    for(int k=0; k<=i; k++)
    {
        printf("#");
    }

    printf("\n");

  }






}

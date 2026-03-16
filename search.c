#include<cs50.h>
#include<stdio.h>

int main(void)
{
  int numbers[]= {5,10,15,20};
  int n = get_int("number : ");

  for(int i=0;i<5;i++)
  {
    if(numbers[i]==n)
    {
        printf("found\n");
        return 0;
    }

  }


   printf("Not found\n");
   return 1;






}

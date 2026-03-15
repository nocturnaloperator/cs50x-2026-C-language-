#include<stdio.h>
#include<cs50.h>

int main(void)
{
   int x = get_int("what is x? ");
   int y = get_int("what is y? ");

   if (x>y)
   {
    printf("X is greater than y\n");
   }
   else
   {
    printf("x is less than y\n");
   }

}

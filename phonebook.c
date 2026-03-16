#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}person;

int main(void)
{
  person people[3];

  people[0].name = "Harsh";
  people[0].number = "+919209302903";

  people[1].name = "Gaurav";
  people[1].number = "+918383902902";

  people[2].name = "Kittu";
  people[2].number = "+917474983982";

  string name = get_string("name: ");

  for(int i=0;i<4;i++)
  {
    if(strcmp(people[i].name,name)==0)
    {
        printf("Found %s\n", people[i].number);
        return 0;
    }
  }

  printf("Not found\n");
  return 1;




}

#include<stdio.h>

int main()
{
  char name[20];
  int age;
  printf("Nam likhun\n");
  scanf("%s",name);
  printf("\nBoyosh likhun");
  scanf("%d",&age);
  if(age>=18)
{
   printf("\nShu shagotom");
}
  else
{
  printf("\n apnar probesh nishiddho"); 
}
return 0;
}
#include<stdio.h>
int main()
{int first,second,third;
 printf("enter");
scanf("%d%d%d",&first,&second,&third);
if(first>second && first>third)
{printf("%d is max",first);}
else if(second>first && second>third)
{printf("%d is max",second);}
else{
printf("%d is max",third);}

}
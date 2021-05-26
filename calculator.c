#include<stdio.h>
{
int a,b,choice;
float res;
printf("press the number you want 1.add 2.minus 3.multiply 4. division");
scanf("%d",choice);
printf("put numbers");
scanf("%d%d",&a,&b);
if(choice==1)
{res=a+b;}
else if(choice==2)
{res=a-b;}
else if(choice=3)
{res=a*b;}
else if(choice=4)
{res=a/b;}
else
{printf("invalid");}
printf("Your result is %.2f",res);
return 0;


}
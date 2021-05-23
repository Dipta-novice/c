#include<stdio.h>
int main()
{
int x,y,temp;
printf("put first",x);
scanf("%d",&x);
printf("\nput second",&y);
scanf("%d",&y);
printf("\nbefore swap x=%d y=%d ",x,y);
temp=x;
x=y;
y=temp;
printf("\nafter swap x=%d y=%d",x,y);
return 0;
}
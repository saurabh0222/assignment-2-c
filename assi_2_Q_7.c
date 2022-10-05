#include<stdio.h>
int main ()
{
int a,count;
printf("enter a number: ");
scanf("%d",&a);
count=a/100%10;
printf("%d",count);
return 0;
}

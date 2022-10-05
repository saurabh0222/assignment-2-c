#include<stdio.h>
int main () //why result is wrong if number is too long ?
{
 int a,b,c=0;
 printf("enter a number to get sum of digits:");
 scanf("%d",&a);
 while (a>0)
 {
  b=a%10;
  c=c+b;
  a=a/10;
 }
 printf("sum of digits is %d",c);
 return 0;
}

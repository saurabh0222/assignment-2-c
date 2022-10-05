#include<stdio.h>
int main()
{
 int a,b,c,e;
 printf("enter a 3 digit number to rotate digits by one place right : ");
 scanf("%d,&a");
 b=a%10;
 c=b*100;
 e=a/10;
 printf("desired number is : %d",a/10+c);
 return 0;
}

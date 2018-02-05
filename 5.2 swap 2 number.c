#include<stdio.h>
int main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
printf("\n before swapping numbers are %d %d",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping numbers are %d %d",a,b);
}

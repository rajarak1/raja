#include<stdio.h>
int main()
{
int x,z;
printf("\n enter two numbers:");
scanf("%d%d",&x,&z);
printf("\n number before swapping are:%d%d",x,z);
x=x^z;
z=x^z;
x=x^z;
printf("\n numbers after swapping:%d%d",x,z);
return 0;
}

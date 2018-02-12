#include<stdio.h>
int main()
{
int n,num;
scanf("%d",&num);
n=num+1;
while(n!=0)
{
if(n%10==0)
{
printf("\n %d",n);
break;
}
n++;
}
return 0;
}

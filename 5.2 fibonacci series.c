#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
printf("%d \n",a);	
c=a+b;
a=b;
b=c;
}
printf("\nnumber is %d",c);
return 0;
}

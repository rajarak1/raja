#include<stdio.h>
int main()
{
int i,N,a[100],sum=0,c;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
sum=sum+a[i];
}
c=sum/N;
printf("%d",c);
}

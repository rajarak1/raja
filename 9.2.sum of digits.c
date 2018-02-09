#include<stdio.h>
int main()
{
	int n,i=0,x=0,sum=0;
	printf("\n enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;
		sum=sum+x;
	}
	
	
	printf("\n %d ",sum);
}

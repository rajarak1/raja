#include<stdio.h>
int main()
{
	int a=10,b=15,temp=0;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n AFTER SWAPPING \n a=%d \n b=%d",a,b);
}

#include <stdio.h>

void main(void) 
{
	int a[2],b[2],c[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
	scanf("%d",&c[i]);
	}

	for(i=0;i<2;i++)
	{
	if(a[0]==b[0] && b[0]==c[0])
    flag=1;
	}
	if(flag==1)
	printf("\n yes");
	else
	printf("\n no");
	return 0;
}

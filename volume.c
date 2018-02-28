#include <stdio.h>
int main()
{
	int l,b,h,tsa,volume;
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("\n volume=%d\n",volume);
	printf("\n TSA=%d",tsa);
	return 0;
}

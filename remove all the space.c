#include <stdio.h>
#include<string.h>
void  main(void)
{
	char a[10];
	int n,i;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]!=' ')
	   {
	       printf("%c",a[i]);
	   }
	}
	return 0;
}

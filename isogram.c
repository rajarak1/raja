#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j=0,k=0;
	char s1[100];
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i+1;s1[j]!='\0';j++)
		{
			if(s1[i]==s1[j])
			{
				printf("\n not an isogram");
				return(0);
			}
		}
	}
	printf("\n isogram");
}

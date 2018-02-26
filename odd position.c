#include <stdio.h>
#include<string.h>
void main() 
{
	int i,j=0,k=0;
	char s1[100]="XOECD",s2[50],s3[50];
	for(i=0;s1[i];i++)
	{
		if(i%2==0)
		{
			s2[j]=s1[i];
			j++;
		}
		else
		{
		s3[k]=s1[i];
		k++;
	}
	}
	puts(s2);
	puts(s3);
    }

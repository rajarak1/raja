#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,count=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            printf("\n yes..vowels in it");
            break;
        }
        else
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("\n no vowels in it");
    }
   
	return 0;
}

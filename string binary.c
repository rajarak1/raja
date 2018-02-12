#include <stdio.h>
#include<string.h>
int main() 
{
char a[100];
int n,i,num,count=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='0'||a[i]=='1')
{   
count++;
}
else
{
printf("\n no.its not a binary reprasentation");
break;
}
}
if(n==count)
{
printf("\n yes.its a binary reprasentation");
}
return 0;
}

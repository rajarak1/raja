#include <stdio.h>

int main()
{
int n,count=0;
printf("\n enter the num:");
scanf("%d",&n);
 while(n!=0)
  {
       n/=10;
       count++;
    }
printf("\n the no of digits is :%d",count);
 return 0;
}

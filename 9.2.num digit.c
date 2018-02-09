#include <stdio.h>
int main(void)
{
int num,t,rem=0,i;
  printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
		t=num%10;
		rem=(rem*10)+t;
		num=num/10;
		}
		while(rem!=0)
		{
			i=rem%10;
			rem=rem/10;
			printf(" %d\t",i);
			}
      return 0;
			}

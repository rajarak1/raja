#include<stdio.h>
int main()
{
    int n,m;
    printf("\n enter the number");
    scanf("%d",&n);
    m=(n&(n-1));
    if(m==0)
    printf("\n yes");
    else
    printf("\n no");
    return 0;
}

#include<stdio.h>
int main()
{
  int i,j,a[50],n,t;
    scanf("%d",&n);
    printf("\n enter the values");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
        printf("\n %d",a[0]);
        printf("\n %d",a[n]);
       return 0;
}

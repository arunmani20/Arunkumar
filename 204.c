#include<stdio.h>
void main()
{
    int a[25],n,i,sum=0,co=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            sum=sum+a[i];
        }
        else
        {
            co++;
        }
    }
    printf("\n sum is %d",sum);
    if(co>0)
    {
        printf("\n all are positive values");
    }
}

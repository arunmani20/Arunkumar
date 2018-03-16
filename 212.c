#include<stdio.h>
void main()
{
    int a[10][10],r,c,sum=0,cou=0,n,i,j;
    printf("Enter the n values");
    scanf("%d",&n);
    printf("\n enter the row  and column size");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            if(i==j)
            {
                sum=sum+a[i][j];
                
            }
            else
            {
                cou=cou+a[i][j];
            }
        }
    }
    printf("\n the product of sum of diagonal is ",(cou*sum));
}

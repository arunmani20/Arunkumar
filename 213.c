#include<stdio.h>
void main()
{
    int a[10][10],r,c,sum=1,cou=1,i,j;


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
                sum=sum*a[i][j];
                
            }
            else
            {
                cou=cou*a[i][j];
            }
        }
    }
    printf("\n the  sum of product of diagonal is %d ",(cou+sum));
}

#include<stdio.h>
void main()
{
    int a[10],n,i,c[10],cou=0,j;
    printf("\n Enter how many elements");
    scanf("%d",&n);
    j=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
printf("\n The Array elemente Are");
for(i=0;i<n;i++)
    {
        printf("\n 1 array values%d",a[i]);
    }
for(i=0;i<n;i++)
    {
        printf("\n2 array values  %d",c[i]);
    }
for(i=0;i<n;i++)
{  
    if(a[i]==c[j-1])
    {
      cou++;
      j--;
    }
}
if(cou==n)
{
    printf("\n yes");
}
else
{
    printf("\n no");
}
}
    
    
    

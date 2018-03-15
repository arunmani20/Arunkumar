#include<stdio.h>
void main()
{
    int a[10],n,k,i,cou=0;
    printf("\n enter the n and k value");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
  {
      if(k==a[i])
      {
          printf("\n Yes The number is present ");
          printf("\n the next greatest element is  %d",a[i+1]);
      }
    
  }
 
}

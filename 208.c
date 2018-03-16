#include <stdio.h>
void  main()
{
    int base, expo,result=1,s,c;
    printf("\n Enter a base and exponent  number: ");
    scanf("%d %d", &base,&expo);
    printf("\n enter the c value");
    scanf("%d",&c);
    while (expo != 0)
    {
        result =result* base;
        --expo;
    }
  s=(result%c);
  printf("%d",s);
    
}

#include <stdio.h>
void  main()
{
    int base, expo,result=1;

    printf("\n Enter a base and exponent  number: ");
    scanf("%d %d", &base,&expo);
    while (expo != 0)
    {
        result =result* base;
        --expo;
    }

    printf("Answer is %d ", result);
}

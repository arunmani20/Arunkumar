#include <stdio.h>
void decToBinary(int n)
{ 
    int bNum[100],i=0,j;
    while (n > 0) {
 
        bNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for ( j = i - 1; j >= 0; j--)
    {
        printf("%d", bNum[j]);
}
}
int main()
{    int n;
   printf("\n Enter the decimal number");
   scanf("%d",&n);
    decToBinary(n);
    return 0;
}

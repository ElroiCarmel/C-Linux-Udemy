#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, d1, d2, d3;
    printf("Enter a number of 3 digits: ");
    scanf("%d", &num);
    d1 = num/100;
    d2 = (num/10)%10;
    d3 = num%10;
    // printf("d1 is: %d\n", d1);
    // printf("d2 is: %d\n", d2);
    // printf("d3 is: %d\n", d3);
    printf("The sum is: %d\n", d1+d2+d3);
    printf("The reversed is: %d%d%d\n", d3,d2,d1);
    return 0;
}
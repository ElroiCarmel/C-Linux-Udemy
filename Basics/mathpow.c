#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, x2, x4, x6, x8;
    printf("Enter a number: ");
    scanf("%d", &x);
    x2 = x*x;
    // x4 = x2*x2;
    x4 = (int) pow(x,4);
    x6 = x4*x2;
    x8 = x6*x2;
    printf("x^2 = %d, x^4 = %d, x^6 = %d, x^8 = %d\n", x2,x4,x6,x8);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // an = a1 + (n-1)*d
    // Sn = (a1+an)*(n/2)
    int a1, n, d, an;
    double sn;
    printf("Enter a1: ");
    scanf("%d", &a1);
    printf("Enter d: ");
    scanf("%d", &d);
    printf("Enter n: ");
    scanf("%d", &n);
    an = a1 + (n-1)*d;
    printf("The n-th number is: %d\n", an);
    sn = (a1+an)*(n/2.0);
    printf("The sum is: %.2lf\n", sn);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    int product = 1, i;
    if (num < 0) return -1;
    for (i=1; i<=num; i++)
    {
        product = product * i;
    }
    return product;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The factorial of %d is %d\n", x, fact(x));
    return 0;
}
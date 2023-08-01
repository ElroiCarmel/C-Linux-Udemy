#include <stdio.h>
#include <stdlib.h>


void findMinMax(int num1, int num2, int *pmin, int *pmax)
{
    if (num1 > num2)
    {
        *pmin = num2;
        *pmax = num1;
    } else {
        *pmin = num1;
        *pmax = num2;
    }
}

int main()
{
    int a = 10, b = 7;
    int min, max;
    findMinMax(a,b,&min,&max);
    printf("Maximum is %d, Minimum is %d\n", max, min);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    double result;
    result = num1/(double)num2; //asusming num2 != 0
    printf("result = %.2lf\n", result);
    return 0;
}
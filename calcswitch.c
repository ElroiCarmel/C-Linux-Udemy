#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int num1, num2;
    printf("Enter the desired operation: {+,-,*,/,%%}: ");
    scanf("%c", &op);
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case '/':
            printf("%d / %d = %f\n", num1, num2, ((double) num1)/num2);
            break;
        case '%':
            printf("%d %% %d = %d\n", num1, num2, num1%num2);
            break;
        default:
            printf("ERROR!!!\n");
            break;
    }
    return 0;
}
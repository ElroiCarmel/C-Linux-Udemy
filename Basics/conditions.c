#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade, num1, num2, num3;
    printf("Enter grade: ");
    scanf("%d", &grade);
    if (grade>=60)
        printf("Very Good!\n");
    else
        printf("Failed...\n");
    printf("Enter number: ");
    scanf("%d", &num1);
    printf("Enter second: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("Maximun = %d", num1);
    else
        printf("Maximum = %d\n", num2);
    printf("Enter a number: ");
    scanf("%d", &num3);
    if (num3%2==0)
        printf("%d is even number\n", num3);
    else
        printf("%d is odd number\n", num3);
    return 0;
}
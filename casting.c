#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    double result;
    int grade1, grade2, grade3;
    double ave;
    result = num1/(double)num2; //asusming num2 != 0
    printf("result = %.2lf\n", result);
    printf("%d\n", (int) 7.93);
    printf("Grade 1: ");
    scanf("%d", &grade1);
    printf("Grade 2: ");
    scanf("%d", &grade2);
    printf("Grade 3: ");
    scanf("%d", &grade3);
    ave = (grade1 + grade2 + grade3)/3.0;
    printf("The average grade is: %.2lf\n", ave);
    return 0;
}
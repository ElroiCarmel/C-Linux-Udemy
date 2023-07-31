#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    int n1, n2, n3, max, min;
    // printf("Enter a number: ");
    // scanf("%lf", &num1);
    // printf("Enter a second number: ");
    // scanf("%lf", &num2);
    // if (num1 > num2)
    //     printf("Maximum: %f\nMinimum: %f\n", num1, num2);
    // else
    //     printf("Maximum: %f\nMinimum: %f\n", num2, num1);

    //Finding max and min of 3 variables
    printf("N1 = ");
    scanf("%d", &n1);
    printf("N2 = ");
    scanf("%d", &n2);
    printf("N3 = ");
    scanf("%d", &n3);
    if (n1 > n2) {
        if (n1 > n3){
            max = n1;
            if (n3 > n2)
                min = n2;
            else
                min = n3;
        }else {
            min = n2;
            max = n3;}
    } else
        if (n2 > n3){
            max = n2;
            if (n1 > n3){
                min = n3;
            } else {
                min = n1;
            }
        } else {
            max = n3;
            min = n1;}
    printf("Maximun: %d\nMinimum: %d\n", max, min);
    return 0;
}
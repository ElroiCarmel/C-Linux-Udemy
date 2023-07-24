#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    age = 26;
    double temp;
    temp = 26.8;
    int grade1;
    int grade2;
    scanf("%d", &grade1);
    scanf("%d", &grade2);
    double ave;
    ave = (grade1+grade2)/2.0;
    printf("The average is: %.2f\n", ave);
    return 0;
}
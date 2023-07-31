#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tempc, tempf, tempc2, tempf2;
    printf("Enter Celsius temperatures: ");
    scanf("%lf", &tempc);
    tempf = tempc * 1.8 + 32;
    printf("The temperatures in Fahrenheit is: %.2lf\n", tempf);
    printf("Enter Fahrenheit: ");
    scanf("%lf", &tempf2);
    tempc2 = (tempf2-32)/1.8;
    printf("The Celsius is: %.2lf\n", tempc2);
    return 0;
}
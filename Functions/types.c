#include <stdio.h>
#include <stdlib.h>

void message()
{
    printf("My first void function!!\n");
}

void printMinMax(int x, int y)
{
    if (x>y)
        printf("Max = %d, Min = %d\n", x, y);
    else
        printf("Max = %d, Min = %d\n", y, x);
}
/*
Recieves 3 numbers
Returns the maximum
*/
int getMax(int num1, int num2, int num3)
{
    int ans;
    if (num1>num2 && num1 > num3)
    {
        ans = num1;
    } else if (num2 > num1 && num2 > num3)
    {
        ans = num2;
    } else 
    {
        ans = num3;
    }
    return ans;
}

int maxBetween3()
{
    int num1, num2, num3;
    printf("Enter 3 numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1>num2 && num1 > num3)
    {
        return num1;
    } else if (num2 > num1 && num2 > num3)
    {
        return num2;
    } 
    return num3;
}

double findAve(int g1, int g2, int g3)
{
    double ave;
    ave = (g1+g2+g2)/3.0;
    return ave;
}

int main()
{
    int max;
    int g1,g2,g3;
    message();
    printMinMax(4,10);
    printf("Maximum is: %d\n", getMax(10,5,8));
    max = maxBetween3();
    printf("MAx between three is: %d\n", max);
    printf("Enter 3 grades: ");
    scanf("%d%d%d", &g1,&g2,&g3);
    printf("The average is : %.2f\n", findAve(g1,g2,g3));
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

void twoDigitMax(int num)
{
    if (num < 10 || num >99)
        printf("Error! You didn't enter a 2 digit number!!\n");
    else if (num/10 > num%10)
        printf("%d is the max digit\n", num/10);
    else
        printf("%d is the max digit\n", num%10);
}

int main()
{
    int x;
    printf("Enter a 2 digit number: ");
    scanf("%d", &x);
    twoDigitMax(x);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double price, sum=0;
    do {
        printf("Enter a price: ");
        scanf("%lf", &price);
        sum = sum + price;
    } while (price!=0);
    printf("Total bill is: %.2f\n", sum);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        if (num!=1){
        printf("*");
        } else {
            printf("*\n");
        }
        num-=1;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pow, ans, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    ans = num;
    printf("Enter the power: ");
    scanf("%d", &pow);
    count = pow;
    while (count > 1)
    {
        ans = ans * num;
        count = count - 1;
    }
    printf("%d ^ %d = %d\n", num, pow, ans);
    return 0;
}
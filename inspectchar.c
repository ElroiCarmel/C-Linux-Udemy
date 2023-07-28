#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("Lower case\n");
    else if (c >= 'A' && c <= 'Z')
        printf("Upper case\n");
    else if (c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Other\n");
    return 0;
}
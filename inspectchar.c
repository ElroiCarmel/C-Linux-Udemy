#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, c2;
    int chardec;
    printf("Enter a character: ");
    scanf("%c", &c);
    chardec = (int) c;
    if (chardec >= (int) 'a' && chardec <= (int) 'z')
        printf("Lower case\n");
    else if (chardec >= (int) 'A' && chardec <= (int) 'Z')
        printf("Upper case\n");
    else if (chardec >= (int) '0' && chardec <= (int) '9')
        printf("Digit\n");
    else
        printf("Other\n");
    printf("Enter a second character: ");
    return 0;
}
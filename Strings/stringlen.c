#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfString(char *str);

int main()
{
    char name[20];
    printf("Enter your full name: ");
    scanf("%[^\n]s", name);
    printf("Your full name's length is %d\n", lengthOfString(name));
    return 0;
}

int lengthOfString(char *str)
{
    int i=0;
    while (str[i] != '\0') i++;
    return i;
}
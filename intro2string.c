#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Different ways to initiate a String */
    char charArray[] = {'H', 'l', 'l', 'o'}; // Not a String because there isn't '\0' at the end
    char str[] = {'H', 'e','l', 'l', 'o', '\0'}; // This is a String!!
    char strQu[] = "Hello";
    char firstName[] = "Elroi";
    char lastName[7] = "Carmel";
    int i=0;
    while (lastName[i] != '\0')
    {
        printf("%c", lastName[i]);
        i++;
    }
    printf("\n");
    printf("%s\n", str);
    return 0;
}
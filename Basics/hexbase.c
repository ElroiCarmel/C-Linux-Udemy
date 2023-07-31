#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, day, month, test;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Year = 0x%X\nDay = 0x%X\nMonth = 0x%X\n", year, day, month);
    return 0;
}
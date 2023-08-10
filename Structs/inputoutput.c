#include <stdio.h>
#include <stdlib.h>

/* Using input output function on structs */

typedef struct date
{
    /* data */
    int day;
    int year;
    int month;
}Date;

void printDate(Date d)
{
    printf("Day = %d, Month = %d, Year = %d\n", d.day, d.month, d.year);
}

Date inputDate()
{
    Date d;
    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);
    return d;
}

int main()
{
    Date gd;
    gd = inputDate();
    printDate(gd);
    return 0;
}

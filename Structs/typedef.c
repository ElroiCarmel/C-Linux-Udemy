#include <stdio.h>
#include <stdlib.h>

/* Introduction to structures in C
   Now using the "typedef"
 */

typedef struct date
{
    /* data */
    int day;
    int month;
    int year;
}Date;



int main()
{
    Date myDate;
    myDate.day =23;
    myDate.month = 5;
    myDate.year = 2020;
    return 0;
}
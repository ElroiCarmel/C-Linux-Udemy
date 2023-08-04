#include <stdio.h>
#include <stdlib.h>

/* Introduction to structures in C */

struct date
{
    /* data */
    int day;
    int month;
    int year;
};

struct point
{
    /* data */
    int x;
    int y;
};


int main()
{
    struct date myDate1, myDate2;
    myDate1.day = 12;
    myDate1.month = 3;
    myDate1.year = 1997;
    printf("My birthday is %d/%d/%d\n", myDate1.day, myDate1.month, myDate1.year);
    return 0;
}
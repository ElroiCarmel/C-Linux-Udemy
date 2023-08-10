#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    /* data */
    int x;
    int y;
}Point;

void printPoint(Point p)
{
    printf("(%d,%d)\n", p.x, p.y);
}

Point inputPoint()
{
    Point p;
    printf("Enter 'x' value: ");
    scanf("%d", &p.x);
    printf("Enter 'y': ");
    scanf("%d", &p.y);
    return p;
}

int main()
{
    // Just declaration
    Point p1;
    // Initialize with arguments, instead using mulitiple lines
    Point p2 = {4, 8};
    // Designated values
    Point p3 = { .x = 5, .y= 9};
    // Designate not all fields, other members wiil be 0
    Point p4 = { .x = 2};
    printPoint(p1);
    printPoint(p2);
    printPoint(p3);
    printPoint(p4);
    // Now with function
    Point p5 = inputPoint();
    printPoint(p5);
    return 0;
}

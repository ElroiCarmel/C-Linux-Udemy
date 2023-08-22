#include <stdio.h>
#include <stdlib.h>

/* How to compare between two structures? */

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

int equalPoint(Point p1, Point p2)
{
    if (p1.x==p2.x && p1.y==p2.y)
    {
        return 1;
    } else 
    {
        return 0;
    }
}


int main()
{
    Point p1 = {3,6}, p2 = {2,8};
    return 0;
}

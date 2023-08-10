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

int main()
{
    Point parr[5];
    int i;
    for (i=0;i<5;i++)
    {
        printf("Enter point %d x,y  values: ", i+1);
        scanf("%d%d", &parr[i].x, &parr[i].y);
    }
    for (i=0;i<5;i++)
    {
        printPoint(parr[i]);
    }
    return 0;
}

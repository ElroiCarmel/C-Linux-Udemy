#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, dis;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("The distance between (%.2lf,%.2lf) and (%.2lf,%.2lf) is: %.2lf\n", x1,y1,x2,y2,dis);
    return 0;
}
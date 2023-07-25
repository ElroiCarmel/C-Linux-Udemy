#include <stdio.h>
// #include <stdlib.h>

int main()
{
    double width, height;
    double area, perimeter;
    printf("Height: ");
    scanf("%lf", &height);
    printf("Width: ");
    scanf("%lf", &width);
    area = width*height;
    printf("The area is: %.2f\n", area);
    perimeter = 2*(width+height);
    printf("The perimeter is %.2f\n", perimeter);
    return (0);
}
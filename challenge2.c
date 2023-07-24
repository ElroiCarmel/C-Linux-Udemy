#include <stdio.h>
// #include <stdlib.h>

int main()
{
    double width, height;
    double area;
    printf("Height: ");
    scanf("%f", &height);
    printf("Width: ");
    scanf("%f", &width);
    area = width*height;
    printf("The area is: %.2f\n", area);
    return (0);
}
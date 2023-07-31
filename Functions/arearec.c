#include <stdio.h>
#include <stdlib.h>

int area(int h, int w)
{
    return h*w;
}

int main()
{
    int height, width;
    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("The area of the rectangle is : %d\n", area(height, width));    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 9;
    int grade1 = 90, grade2 = 75;
    int *p = &num;
    printf("%d\n", num); //prints value of "a"
    printf("%p\n", &num); // prints address of "a"
    printf("%p\n", p); // also prints address
    printf("%d\n", *p); // prints the value because we used '%d' format

    printf("The value of grade1 is: %d\n", grade1);
    printf("The address of grade1 is: %p\n", &grade1);
    printf("The value of grade2 is: %d\n", grade2);
    printf("The address of grade2 is: %p\n", &grade2);
    return 0;
}
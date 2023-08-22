#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union info{
    char name[20];
    int age;
};

struct point_struct
{
    /* data */
    int x;
    int y;
};

union point_union
{
    /* data */
    int x;
    int y;
};


int main()
{
    union info myUnion;
    myUnion.age = 30;
    printf("age = %d\n", myUnion.age);
    strcpy(myUnion.name, "Hello!");
    puts(myUnion.name);
    printf("age = %d\n", myUnion.age);

    struct point_struct point1;
    union point_union point2;

    point1.x = 6;
    point1.y = 7;
    printf("Struct Point = (%d,%d)\n", point1.x,point1.y);

    point2.x = 3;
    printf("Union Point = (%d,%d)\n", point2.x,point2.y);
    point2.y = 9;
    printf("After change: (%d,%d)\n", point2.x,point2.y);
    return 0;
}
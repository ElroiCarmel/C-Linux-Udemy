#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structs having arrays as data members

typedef struct employee
{
    /* data */
    char name[10];
    double age;
    int id;
}Employee;


int main()
{
    Employee emp1;
    Employee emp2 = {"Joseph", 23.5, 208762971};

    emp1 = emp2;
    printf("Employee 1 name: %s\n", emp1.name);
    printf("Employee 2 name: %s\n", emp2.name);
    printf("Address emp1: %p\n", &emp1);
    printf("Address emp2: %p\n", &emp2);

    // Employee *po = &emp1;

    // if (&emp1 == po)
    // {
    //     printf("True\n");
    // } else
    //  {
    //     printf("False\n");
    // }

    // Making sure the copy was by-value and not just by-reference by changing emp2
    strcpy(emp2.name, "Jake");
    printf("Employee 1 name: %s\n", emp1.name);
    printf("Employee 2 name: %s\n", emp2.name);
    return 0;
}
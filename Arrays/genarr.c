#include <stdio.h>
#include <stdlib.h>


int main()
{
    int grades[5];
    int i, lowest;
    for (i=0;i<5;i++)
    {
        printf("Enter grade: ");
        scanf("%d", &grades[i]);
    }
    lowest = grades[0];
    for (i=1;i<5;i++)
    {
        if (grades[i]<lowest) lowest = grades[i];
    }
    printf("The lowest grade is: %d\n", lowest);
    printf("Your grades are: %d\n", grades);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    do {
        printf("Enter a grade: ");
        scanf("%d", &grade);
        if (grade >=0 && grade <= 100)
            printf("Good you enterd \'%d\', a valid grade\n", grade);
    } while (grade >= 0 && grade <= 100);
    printf("You entered \'%d\', not a valid grade\n", grade);
    return 0;
}
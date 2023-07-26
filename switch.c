#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
            printf("Excellent!!\n");
            break;
        case 'B':
            printf("Good!!\n");
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    return 0;
}
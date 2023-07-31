#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempGrade=0, counter=-1, sum=0;
    double ave;
    printf("Enter your grade, for stop enter '-1':\n");
    while (tempGrade != -1)
    {
        sum = sum + tempGrade;
        counter = counter+1;
        scanf("%d", &tempGrade);
    }
    // sum = sum + 1;
    // counter = counter -1;
    ave = ((double) sum) / counter;
    printf ("Your average grade is: %.2f\n", ave);
    return 0;
}
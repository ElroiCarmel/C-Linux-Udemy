#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date[3] = {12,3,1997};
    int datecopy[3];
    int i;
    datecopy[0] = date[0];
    datecopy[1] = date[1];
    datecopy[2] = date[2];
    for (i=0; i<3; i++)
    {
        printf("%d,", date[i]);
    }
    printf("\n");
    for (i=0; i<3; i++)
    {
        printf("%d,", datecopy[i]);
    }
    printf("\n");
    printf("address of original: %p\n", &date);
    printf("address of copy: %p\n", &datecopy);
    return 0;
}
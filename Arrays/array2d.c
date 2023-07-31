#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A 2-Dimensional array -- [rows][columns]
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (j==2){
             printf("%d\n", a[i][j]);
            }    
            else {
                printf("%d,", a[i][j]);
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int nums[SIZE] = {1,4,3,7,1};
    int i, max;
    max = nums[0]+nums[1];
    for (i=1;i<4;i++)
    {
        if (nums[i]+nums[i+1]>max) max = nums[i]+nums[i+1];
    }
    printf("Max sum is %d\n", max);
    return 0;
}
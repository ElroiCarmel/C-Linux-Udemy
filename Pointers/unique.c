#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void findRange(int num[], int *min, int *max)
{
    int i;
    *min = num[0]; *max = num[0];
    for (i=0;i<SIZE; i++)
    {
        if (num[i] > *max) *max = num[i];
        if (num[i] < *min) *min = num[i];
    }
}

int main()
{
    int nums[SIZE] = {1,9,3,7,1,6,3,8,5,9};
    int min, max;
    findRange(nums, &min, &max);
    printf("Max is %d, Min is %d\n", max, min);
    int countSize = max - min + 1;
    int counter[countSize];
    int i;
    for (i=0; i<countSize; i++)
    {
        counter[i] = 0;
    }
    for (i = 0; i<SIZE; i++)
    {
        counter[nums[i]-min]++;
    }
    for (i=0; i< countSize; i++)
    {
        printf("Number %d is %d in the array\n", i+min,counter[i]);
    }
    return 0;
}
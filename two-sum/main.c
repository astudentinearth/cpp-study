#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int *ptr = malloc(2 * sizeof(int));
                *returnSize = 2;
                ptr[0] = i;
                ptr[1] = j;
                return ptr;
            }
        }
    }
    *returnSize = 0;
}

void case1()
{
    int nums[4] = {2, 7, 11, 15};
    int size;
    int *result = twoSum(nums, 4, 9, &size);
    printf("%d, %d\n", result[0], result[1]);
}

void case2()
{
    int nums[3] = {3, 2, 4};
    int size;
    int *result = twoSum(nums, 3, 6, &size);
    printf("%d, %d\n", result[0], result[1]);
}

void case3()
{
    int nums[2] = {3, 3};
    int size;
    int *result = twoSum(nums, 2, 6, &size);
    printf("%d, %d\n", result[0], result[1]);
}

int main()
{
    case1();
    case2();
    case3();
    return 0;
}
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int majorityElement(int* nums, int numsSize)
{
    int i = 1, prev, count = 1;
    if (numsSize == 1)
    {
        return nums[0];
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    prev = nums[0];
    while (i < numsSize)
    {
        if (prev == nums[i])
        {
            count++;
            if (count << 1 > numsSize)
            {
                return prev;
            }
        }
        else
        {
            count = 1;
            prev = nums[i];
        }
        i++;
    }
    return prev;
}
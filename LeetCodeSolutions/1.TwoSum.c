/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *retArr = (int*) malloc(2*sizeof(int));

    for(int i = 0 ; i < numsSize ; i++)
    {
        for (int j = i+1 ; j <numsSize ; j++)
        {
            if(nums[i] + nums [j] == target) {
                retArr[0] =i;
                retArr[1] =j;

                *returnSize = 2;
                return retArr;
            }
        }
    }

    *returnSize = 0;
    return NULL;

}

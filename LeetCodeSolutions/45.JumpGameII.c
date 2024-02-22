int jump(int* nums, int numsSize) {
    int totalSum=0,step = 0,position = 0,returning=0;

    while (position + 1 < numsSize) {
        for (int i = 1; i <= nums[position] && position+i<numsSize; i++) {
            if (i + nums[position+i] >= totalSum) {
                returning = i;
                totalSum = i+ nums[position+i];
            }
            if(position+i>=numsSize-1)
            {
                return step+1;
            }
        }
        position += returning;
        step++;
        totalSum = 0;
    }
    return step;
}

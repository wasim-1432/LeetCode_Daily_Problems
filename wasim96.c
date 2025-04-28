int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,count=0,maxCount=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            count++;
            if(count>maxCount)
            {
                maxCount=count;
            }
        }
        else
        {
            count=0;
        }
    }
    return maxCount;
}
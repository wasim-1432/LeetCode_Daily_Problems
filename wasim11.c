int missingNumber(int* nums, int numsSize) {
    int round,i;
    for(round=0;round<numsSize-1;round++)
    {
        for(i=0;i<numsSize-round-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
        }
    }
    if(nums[0]!=0)
    {
        return 0;
    }
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]+1!=nums[i+1])
        {
            return nums[i]+1;
        }
    }
    return numsSize;
}
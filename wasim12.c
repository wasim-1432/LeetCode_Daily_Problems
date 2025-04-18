int thirdMax(int* nums, int numsSize) {
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
    int j=0;
    for(i=0;i<numsSize;i++)
    {
        if(i==0 || nums[i]!=nums[i-1])
        {
            nums[j++]=nums[i];
        }
    }
    if(j<3)
    {
        return nums[j-1];
    }
    return nums[j-3];
}
int singleNumber(int* nums, int numsSize) {
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
    for(i=0;i<numsSize-1;i++)
    {
        if((i==0 || nums[i-1]!=nums[i]) && (i==numsSize-1 || nums[i]!=nums[i+1]))
            break;
    }
    return nums[i];
}
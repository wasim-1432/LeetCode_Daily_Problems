void sortColors(int* nums, int numsSize) {
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
    for(i=0;i<numsSize;i++)
    {
        printf("%d ",nums[i]);
    }
}
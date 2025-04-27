int countSubarrays(int* nums, int numsSize) {
    int i,count=0;
    for(i=0;i<numsSize-2;i++)
    {
        if(2*(nums[i]+nums[i+2])==nums[i+1])
        {
            count++;
        }
    }
    return count;
}
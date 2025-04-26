int minOperations(int* nums, int numsSize, int k) {
    int i,sum=0,count=0;
    for(i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
    }
    while(sum%k!=0)
    {
        sum=sum-1;
        count++;
    }
    return count;
}
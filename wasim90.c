int minimumOperations(int* nums, int numsSize) {
    int i,count=0,dr=1;
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if((n+1)%3==0)
        {
            n=n+1;
            count++;
        }
        else if((n-1)%3==0)
        {
            n=n-1;
            count++;
        }
    }
    return count;
}
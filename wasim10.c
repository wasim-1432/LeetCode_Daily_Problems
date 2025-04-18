int findNumbers(int* nums, int numsSize) {
    int count,i,k,count1=0;
    for(i=0;i<numsSize;i++)
    {
        count=0;
        k=nums[i];
        while(k)
        {
            count++;
            k=k/10;
        }
        if(count%2==0)
        {
            count1++;
        }
    }
    return count1;
}
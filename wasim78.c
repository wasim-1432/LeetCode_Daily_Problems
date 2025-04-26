int averageValue(int* nums, int numsSize) {
    int i,sum=0,count=0,avg;
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if(n%2==0 && n%3==0)
        {
            sum=sum+n;
            count++;
        }
    }
    if(count==0)
    {
        return 0;
    }
    avg=sum/count;
    return avg;
}
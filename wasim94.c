int sumOfSquares(int* nums, int numsSize) {
    int i,sum=0;
    for(i=1;i<=numsSize;i++)
    {
        int n=numsSize;
        if(n%i==0)
        {
            sum=sum+nums[i-1]*nums[i-1];
        }
    }
    return sum;
}
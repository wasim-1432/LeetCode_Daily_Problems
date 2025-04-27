int sumOfEncryptedInt(int* nums, int numsSize) {
    int i,maxNum1=0,num1,sum=0;
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if(n/10==0)
        {
            sum=sum+n;
        }
        else
        {
            maxNum1=0;
            int count=0;
            while(n)
            {
                num1=n%10;
                if(num1>maxNum1)
                {
                    maxNum1=num1;
                }
                count++;
                n=n/10;
            }
            int j,y=0;
            for(j=0;j<count;j++)
            {
                y=y*10+maxNum1;
            }
            sum=sum+y;
        }
    }
    return sum;
}
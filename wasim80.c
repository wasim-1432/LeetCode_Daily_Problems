int countEven(int num) {
    int i=2,count=0,n,sum;
    while(i<=num)
    {
        if(i%2==0 && i/10==0)
        {
            count++;
        }
        else
        {
            n=i;
            sum=0;
            while(n)
            {
                sum=sum+n%10;
                n=n/10;
            }
            if(sum%2==0)
            {
                count++;
            }
        }
        i++;
    }
    return count;
}
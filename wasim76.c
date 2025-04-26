int alternateDigitSum(int n) {
    int y=0,num,digits,count=0,sum=0;
    num=n;
    while(num)
    {
        y=y*10+num%10;
        num/=10;
    }
    while(y)
    {
        if(count%2==0)
        {
            sum=sum+y%10;
            count++;
        }
        else
        {
            sum=sum-y%10;
            count++;
        }
        y=y/10;
    }
    return sum;
}
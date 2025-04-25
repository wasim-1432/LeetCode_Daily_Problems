int subtractProductAndSum(int n) {
    int pro=1,sum=0,result;
    while(n)
    {
        int t=n%10;
        sum=sum+t;
        pro=pro*t;
        n=n/10;
    }
    result=pro-sum;
    return result;
}
int addDigits(int num) {
    int k=num,sum=0;
    while(k)
    {
        sum=sum+k%10;
        k=k/10;
        if(sum/10!=0 && k==0)
        {
            k=sum;
            sum=0;
        }
    }
    return sum;
}
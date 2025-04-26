int sumOfMultiples(int n) {
    int i=1,sum=0;
    while(i<=n)
    {
        if(i%3==0 || i%5==0 || i%7==0)
        {
            sum=sum+i;
        }
        i++;
    }
    return sum;
}
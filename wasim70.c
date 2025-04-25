int arrangeCoins(int n) {
    int i=1;
    double sum=0;
    while(sum<n)
    {
        sum=sum+i;
        if(sum>n)
        {
            break;
        }
        i++;
    }
    return i-1;
}
int totalMoney(int n) {
    int i=1,sum=0,count=0,j=1;
    while(n)
    {
        if(count==7)
        {
            j++;
            count=0;
            i=j;
        }
        sum=sum+i;
        count++;
        i++;
        n--;
    }
    return sum;
}
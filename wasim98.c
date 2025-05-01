int kthFactor(int n, int k) {
    int i=1,*temp,k1=0;
    temp=(int*)malloc(n*sizeof(int));
    while(i<=n)
    {
        if(n%i==0)
        {
            k1++;
        }
        if(k1==k)
        {
            break;
        }
        i++;
    }
    if(k1==k)
    {
        return i;
    }
    return -1;
}
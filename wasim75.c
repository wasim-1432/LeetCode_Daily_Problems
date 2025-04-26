int xorOperation(int n, int start) {
    int *temp,k=0,count=0,i=start,res;
    temp=(int*)malloc(n*sizeof(int));
    while(count<n)
    {
        temp[k++]=i;
        i=i+2;
        count++;
    }
    res=temp[0];
    for(i=1;i<k;i++)
    {
        res=res^temp[i];
    }
    return res;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *temp,i,t,k=0,n;
    temp=(int*)malloc(right*sizeof(int));
    for(i=left;i<=right;i++)
    {
        n=i;
        while(n)
        {
            t=n%10;
            if(t==0)
            {
                break;
            }
            if(i%t==0)
            {
                n=n/10;
                continue;
            }
            else
            {
                break;
            }
        }
        if(n==0)
        {
            temp[k++]=i;
        }
    }
    * returnSize=k;
    return temp;
}
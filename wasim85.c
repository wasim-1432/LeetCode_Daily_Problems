/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *temp,k=0,i,k1=numsSize-1;
    temp=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if(n%2==0)
        {
            temp[k++]=0;
        }
        else if(n%2!=0)
        {
            temp[k1--]=1;
        }
    }
    * returnSize=numsSize;
    return temp;
}
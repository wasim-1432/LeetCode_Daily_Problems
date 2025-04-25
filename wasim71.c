/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *temp,i,k=0,k1=numsSize-1;
    temp=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        int n=nums[i];
        if(n%2==0)
        {
            temp[k++]=n;
        }
        else
        {
            temp[k1--]=n;
        }
    }
    for(i=0;i<numsSize;i++)
    {
        nums[i]=temp[i];
    }
    free(temp);
    * returnSize=numsSize;
    return nums;
}
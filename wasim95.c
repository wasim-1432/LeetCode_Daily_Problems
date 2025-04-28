/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *temp,k=0;
    temp=(int*)malloc(numsSize*sizeof(int));
    int i;
    for(i=0;i<numsSize;i++)
    {
        int idx=abs(nums[i])-1;
        if(nums[idx]>0)
        {
            nums[idx]=-nums[idx];
        }
    }
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>0)
        {
            temp[k++]=i+1;
        }
    }
    * returnSize=k;
    return temp;
}
void moveZeroes(int* nums, int numsSize) {
    int i,k=numsSize-1,j=0,*temp;
    temp=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            temp[k--]=nums[i];
        }
        else
        {
            temp[j++]=nums[i];
        }
    }
    for(i=0;i<numsSize;i++)
    {
        nums[i]=temp[i];
    }
    for(i=0;i<numsSize;i++)
    {
        printf("%d ",nums[i]);
    }
    free(temp);
}
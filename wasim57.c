int findPeakElement(int* nums, int numsSize) {
    int i,peak=nums[0],peakIndex=0;
    for(i=1;i<numsSize;i++)
    {
        if(nums[i]>peak)
        {
            peak=nums[i];
            peakIndex=i;;
        }
    }
    return peakIndex;
}
int peakIndexInMountainArray(int* arr, int arrSize) {
    int i,peak=arr[0],peakIndex=0;
    for(i=1;i<arrSize;i++)
    {
        if(arr[i]>peak)
        {
            peak=arr[i];
            peakIndex=i;
        }
    }
    return peakIndex;
}
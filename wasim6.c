/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry=1,*result,i,sum;
    result=(int*)malloc((digitsSize+1)*sizeof(int));
    for(i=digitsSize-1;i>=0;i--)
    {
        sum=digits[i]+carry;
        result[i+1]=sum%10;
        carry=sum/10;
    }
    if(carry==0)
    {
        for(i=0;i<digitsSize;i++)
        {
            result[i]=result[i+1];
        }
        * returnSize=digitsSize;
        return result;
    }
    result[0]=carry;
    * returnSize=digitsSize+1;
    return result;
}
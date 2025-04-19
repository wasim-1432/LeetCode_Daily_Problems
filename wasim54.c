/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int i,j,**temp;
    temp=(int**)malloc(* matrixColSize*sizeof(int*));
    for(i=0;i<* matrixColSize;i++)
    {
        temp[i]=(int*)malloc(matrixSize*sizeof(int));
        for(j=0;j<matrixSize;j++)
        {
            temp[i][j]=matrix[j][i];
        }
    }
    * returnSize=* matrixColSize;
    * returnColumnSizes=(int*)malloc(*matrixColSize*sizeof(int));
    for(i=0;i<* matrixColSize;i++)
    {
        (* returnColumnSizes)[i]=matrixSize;
    }
    return temp;
}
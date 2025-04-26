/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    int k=0;
    double *temp,Kelvin,Fahrenheit;
    temp=(double*)malloc(2*sizeof(double));
    Kelvin=celsius + 273.15;
    temp[k++]=Kelvin;
    Fahrenheit = celsius * 1.80 + 32.00;
    temp[k++]=Fahrenheit;
    * returnSize=k;
    return temp;
    free(temp);
}
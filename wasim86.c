int findClosest(int x, int y, int z) {
    int r1,r2;
    r1=abs(x-z);
    r2=abs(y-z);
    if(r1<r2)
    {
        return 1;
    }
    else if(r1==r2)
    {
        return 0;
    }
    return 2;
}
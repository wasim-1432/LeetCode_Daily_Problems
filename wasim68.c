bool isPerfectSquare(int num) {
    int res=sqrt(num);
    if(num==res*res)
    {
        return true;
    }
    return false;
}
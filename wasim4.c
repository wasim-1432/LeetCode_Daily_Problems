bool isPalindrome(int x) {
    int t;
    double y=0;
    t=x;
    if(x>=0)
    {
        while(t)
        {
            y=y*10+t%10;
            t=t/10;
        }
        if(x==y)
        {
            return true;
        }
    }
    return false;
}
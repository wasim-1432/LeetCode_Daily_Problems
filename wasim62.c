bool isUgly(int n) {
    int digits=n%10;
    if(n<=0)
    {
        return false;
    }
    if(n==1)
    {
        return true;
    }
    while(n>=1)
    {
        if(n%2==0)
        {
            n=n/2;
            continue;
        }
        if(n%3==0)
        {
            n=n/3;
            continue;
        }
        if(n%5==0)
        {
            n=n/5;
            continue;
        }
        if(n==1)
        {
            break;
        }
        else
        {
            return false;
        }
    }
    return true;
}
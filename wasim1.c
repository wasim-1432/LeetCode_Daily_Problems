int reverse(int x){
    int y=0;
    while(x)
    {
        int digits=x%10;
        if(y>INT_MAX/10 || y==INT_MAX/10 && digits>7)
            return 0;
        if(y<INT_MIN/10 || y==INT_MIN/10 && digits<-8)
            return 0;
        y=y*10+digits;
        x=x/10;
    }
    return y;
}
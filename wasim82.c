int passThePillow(int n, int time) {
    int i=1,t=0,dir=1;
    while(t<time)
    {
        if(i==1)
        {
            dir=1;
        }
        else if(i==n)
        {
            dir=-1;
        }
        i=i+dir;
        t++;
    }
    return i;
}
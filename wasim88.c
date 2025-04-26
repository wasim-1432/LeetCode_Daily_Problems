int maxContainers(int n, int w, int maxWeight) {
    int s;
    if(n*n*w<=maxWeight)
    {
        return n*n;
    }
    else if(n*n*w>maxWeight)
    {
        s=(n*n);
        while(s*w>maxWeight)
        {
            s--;
            if(s*w<=maxWeight)
            {
                break;
            }
        }
    }
    return s;
}
int maxPower(char* s) {
    int i,l,count=1,maxCount=1;
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(count>maxCount)
            {
                maxCount=count;
            }
        }
        else
        {
            count=1;
        }
    }
    return maxCount;
}
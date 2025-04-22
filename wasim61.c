char findTheDifference(char* s, char* t) {
    char res=0;
    while(*s)
    {
        res=res^*s;
        s++;
    }
    while(*t)
    {
        res=res^*t;
        t++;
    }
    return res;
}
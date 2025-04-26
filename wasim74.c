bool canWinNim(int n) {
    if(n<=2)
    {
        return true;
    }
    if(n%4==0)
    {
        return false;
    }
    return true;;
}
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int result;
    result=arrivalTime+delayedTime;
    if(result%24==0)
    {
        return 0;
    }
    return result%24;
}
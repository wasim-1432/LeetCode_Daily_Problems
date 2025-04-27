int dayOfYear(char* date) {
    int day_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31},day,month,year;
    sscanf(date,"%d-%d-%d",&year,&month,&day);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        day_in_month[1]=29;
    }
    int i,day_number=0;
    for(i=0;i<month-1;i++)
    {
        day_number=day_number+day_in_month[i];
    }
    day_number=day_number+day;
    return day_number;
}
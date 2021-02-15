#include<stdio.h>
int main()
{
    int min,hour=0,day=0,month=0,year=0;
    scanf("%d",&min);

    hour=min/60;
    min=min%60;

    day=hour/24;
    hour=hour%24;

    month=day/30;
    day=day%30;

    year=month/12;
    month=month%12;

    printf("Year %d\n",year);
    printf("Month %d\n",month);
    printf("Day %d\n",day);
    printf("Hour %d\n",hour);
    printf("Minute %d\n",min);

    return 0;
}

#include<stdio.h>
int main()
{
    struct flight
    {
        int sno;
        char flight[20];
        char from[20];
        char to[20];
        int economy;
        int business;
        int first;
        char airline[30];
        char time[10];
    };
    struct flight shed[100];
    int num;
    printf("How Many Number: ");
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++)
    {
        printf("Enter Flight Number: ");
        fflush(stdin);
        gets(shed[i].flight);
        printf("Enter Where From: ");
        fflush(stdin);
        gets(shed[i].from);
        printf("Enter Where To: ");
        fflush(stdin);
        gets(shed[i].to);
        printf("Enter Amount of Economy  Class: ");
        fflush(stdin);
        scanf("%d",&shed[i].economy);
        printf("Enter Amount of Business Class: ");
        fflush(stdin);
        scanf("%d",&shed[i].business);
        printf("Enter Amount Of First Class: ");
        fflush(stdin);
        scanf("%d",&shed[i].first);
            printf("Enter Flight Time: ");
        fflush(stdin);
        gets(shed[i].time);
        printf("Enter Airline: ");
        fflush(stdin);
        gets(shed[i].airline);
    }
    FILE *flightshed;
    flightshed=fopen("d:\\project\\flight.txt", "a");
    for(i=0;i<num;i++)
    {
        fprintf(flightshed,"%d\t",i+1);
        fprintf(flightshed,"%s\t\t",shed[i].flight);
        fprintf(flightshed,"%s\t\t",shed[i].from);
        fprintf(flightshed,"%s\t\t",shed[i].to);
        fprintf(flightshed,"%d\t\t",shed[i].economy);
        fprintf(flightshed,"%d\t\t",shed[i].business);
        fprintf(flightshed,"%d\t\t",shed[i].first);
        fprintf(flightshed,"%d\t\t\n",shed[i].time);
        fprintf(flightshed,"%s\t\t",shed[i].airline);
    }
    fclose(flightshed);

}

#include<stdio.h>
void main ()
{
    int n,i,num[100],sum=0,avg;
    printf("Enter Limit: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Number %d: ",i);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=sum/n;
    printf("Average is %d",avg);

    getch ();
}

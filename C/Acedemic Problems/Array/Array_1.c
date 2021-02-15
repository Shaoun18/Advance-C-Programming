#include<stdio.h>
int main ()
{
    int i,sum=0, num[10];
    for(i=0; i<10; i++)
    {
        printf("Enter Mark %d: ",i);
        scanf("%d",&num[i]);
        sum += num[i];
    }
    printf("Result is %d",sum);

    return 0;
}

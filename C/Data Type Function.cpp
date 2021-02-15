#include<stdio.h>
int main ()
{
    int sum,i,j,num[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter values: ");
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        sum=sum+num[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}

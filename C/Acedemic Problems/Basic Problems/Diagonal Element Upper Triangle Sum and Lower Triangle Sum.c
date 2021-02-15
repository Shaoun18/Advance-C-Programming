#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum1=0,sum2=0,total=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
                sum1=sum1+a[i][j];
            if(i>j)
                sum2=sum2+a[i][j];
            if(i!=j)
                total=total+a[i][j];
        }
    }
    printf("Sum1: %d\nSum2: %d\nTotal: %d",sum1,sum2,total);
}

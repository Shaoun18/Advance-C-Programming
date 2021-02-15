#include<stdio.h>
int main()
{
    int i,j,arr[4][4],sum=0,sum2=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                sum=sum+arr[i][j];
            if(i==4-j-1)
                sum2=sum2+arr[i][j];

        }
    }
    printf("%d\n",sum);
    printf("%d",sum2);
}

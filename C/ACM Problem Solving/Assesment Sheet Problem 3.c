#include<stdio.h>
int main()
{
    int arr[4][4],i,j,sum=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",arr[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                sum=sum+arr[i][j];
        }
    }
    printf("Sum of diagonal element: %d",sum);

    return 0;
}

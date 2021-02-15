#include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum is %d",sum);

    return 0;
}

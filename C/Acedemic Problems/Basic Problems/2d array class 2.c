#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],arr2[3][3],i,j;
    printf("input array 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("input array 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    printf("printing array 3\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
    }
}


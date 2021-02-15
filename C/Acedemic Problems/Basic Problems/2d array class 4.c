#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],arr2[3][3],i,j;
    printf("Input Array 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Input Array 2\n");
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
            arr2[i][j]=arr[i][j]*arr1[i][j];
        }
    }
    printf("Printing Array 3\");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
    }
}

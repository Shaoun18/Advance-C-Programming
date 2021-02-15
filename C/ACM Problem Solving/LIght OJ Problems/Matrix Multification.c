#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0,r1,c1,r2,c2;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);

    if(r1!=c2)
    {
        printf("Sorry! Multiplication is not possible");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("A[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("B[%d][%d]:",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
            c[i][j]=sum;
            sum=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            {
            printf("%d ",c[i][j]);
            }
        }
    }
}

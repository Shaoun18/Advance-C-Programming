#include<stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

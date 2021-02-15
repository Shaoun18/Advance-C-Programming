#include<stdio.h>
int main ()
{
    int i,j,k,n;
    printf("enter limit: ");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        for(j=1; 1<=(n-i); j++)
            printf(" ");
        for(k=1;k<=(2*i-1);k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

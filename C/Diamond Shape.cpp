#include<stdio.h>
int main ()
{
    int i,c,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(c=n-1; c>=i; c--)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(c=1; c<=i; c++)
            printf(" ");
        for(j=n-1; j>=i; j--)
            printf("* ");
        printf("\n");
    }
    return 0;
}

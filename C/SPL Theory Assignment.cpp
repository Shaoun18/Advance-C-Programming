/*#include<stdio.h>
int main()
{
    int i,num[6];
    for(i=0;i<=5;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<=5;i++)
    {
        if(num[i]%2 != 0)
            printf(" %d ",num[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int x,a=0,b=2,i;

    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("%d\n",a);
        a=a+b;
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int i,j,r;
    printf("Input number of rows (half of the diamond) :");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=r-1;i>=1;i--)
    {
        for(j=1;j<=r-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
 }


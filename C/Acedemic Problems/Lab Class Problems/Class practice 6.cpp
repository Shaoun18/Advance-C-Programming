#include<stdio.h>
int main ()
{
    int i,n,x,mul=1;

    printf("Enter Number: ");
    scanf("%d",&x);
    printf("Enter Power: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        mul=mul*x;
        printf("%d\n",mul);

    }
    return 0;
}

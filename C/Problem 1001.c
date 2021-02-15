#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("%d %d\n",n/2,n-n/2);
    }
    return 0;
}

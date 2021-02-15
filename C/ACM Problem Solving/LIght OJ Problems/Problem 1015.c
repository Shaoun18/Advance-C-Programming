#include<stdio.h>
int main()
{
    int c1,c2,n,i,j;
    scanf("%d",&c1);

    for(i=1;i<=c1;i++)
    {
        int sum=0;
        printf("\n");
        scanf("%d",&c2);
        for(j=1;j<=c2;j++)
        {
            scanf("%d",&n);
            sum=sum+n;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

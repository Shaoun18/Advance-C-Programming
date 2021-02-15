#include<stdio.h>
int main ()
{
    int i,sum=1,n;
    printf("Enter Limit: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",sum);
        sum=sum+2;
    }

   return 0;
}

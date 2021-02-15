#include<stdio.h>
int main()
{
    int n=4,i,a=2,b=2,sum=2;

    for(i=1;i<=n;i++)
    {
        printf("%d\n",sum);
        a=a+b;
        sum=sum+a;
    }
    return 0;
}

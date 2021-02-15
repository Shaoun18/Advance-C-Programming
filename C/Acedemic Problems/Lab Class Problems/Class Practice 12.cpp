#include<stdio.h>
int main ()
{
    int i,sum,a=0,b=1,n;
    printf("Enter Limit: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d",a);
        sum=a+b;
        a=b;
        b=sum;
    i++;
    }
    return 0;
}

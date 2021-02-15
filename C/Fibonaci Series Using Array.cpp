#include<stdio.h>
int main ()
{
    int i,n,a[100],sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Summation Of Fibonaci Series=%d",sum);
    return 0;
}

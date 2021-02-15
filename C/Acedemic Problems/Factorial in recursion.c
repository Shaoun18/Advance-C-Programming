#include<stdio.h>
int fact(n);
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",fact(x));
}
int fact(n)
{
    int sum;
    if(n==1)
        return 1;
    else
        sum=n*fact(n-1);
    return sum;
}

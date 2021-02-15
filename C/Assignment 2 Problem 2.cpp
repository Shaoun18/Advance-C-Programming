#include<stdio.h>
void prime(int n);
int main()
{
    int x;
    scanf("%d",&x);

    prime(x);

    return 0;
}
void prime(int n)
{
    int i,count=0;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}

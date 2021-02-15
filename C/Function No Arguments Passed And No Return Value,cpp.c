#include<stdio.h>

void CheckPrime()
{
    int n,c=0,i;
    printf("Enter A Number: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}
int main ()
{
    CheckPrime();

    return 0;
}

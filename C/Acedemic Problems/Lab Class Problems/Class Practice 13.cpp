#include<stdio.h>
int main ()
{
    int i,j,k,n,mul;
    printf("Enter N: ");
    scanf("%d",&n);


    for(i=1; i<=n%3==1; i++)
    {
    for(j=1; j<=10; j++)
    {
    mul=i*j;
    printf("%d ",mul);
    }
    printf("\n");
    }
}

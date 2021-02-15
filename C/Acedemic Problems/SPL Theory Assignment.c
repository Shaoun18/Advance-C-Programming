#include<stdio.h>
int recurse_odd(int b,int n);
int main()
{
    int b=1,n;
    printf("Enter Limit: ");
    scanf("%d",&n);
    if(n%2==0)
        n=n-1;
    recurse_odd(b,n);

    getch();
}
int recurse_odd(int b,int n)
{
    if(b==n)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d ",b);
        return recurse_odd(b+2,n);
    }

}

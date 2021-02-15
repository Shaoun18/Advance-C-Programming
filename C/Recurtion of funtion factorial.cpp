#include<stdio.h>
int fact(int n);
int main()
{
    int x;
    scanf("%d",&x);

    printf("%d",fact(x));

}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

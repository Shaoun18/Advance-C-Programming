#include<stdio.h>
int sum(int x)
{
    int s;
    if(x==0)
        return 0;
    else
        s=x+sum(x-1);
    return s;

}
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",sum(n));

}

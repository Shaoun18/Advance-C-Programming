#include<stdio.h>
int func(int x, int y)
{
    int s;
    if(y==1)
        return x;
    else
        s=x*func(x,y-1);
    return s;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d",func(a,b));
}

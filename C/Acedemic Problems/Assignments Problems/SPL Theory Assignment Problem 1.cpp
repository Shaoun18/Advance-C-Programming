#include<stdio.h>
int main()
{
    int x,a=0,b=2,i;

    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("%d\n",a);
        a=a+b;
    }
    return 0;
}

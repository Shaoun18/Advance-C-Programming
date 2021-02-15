#include<stdio.h>
void check(int num[]);
int main()
{
    int i,num[6];
    for(i=0;i<=5;i++)
    {
        scanf("%d",&num[i]);
    }
    check(num);

    return 0;
}
void check(int num[])
{
    int i;
    for(i=0;i<=5;i++)
    {
        if(num[i]%2 != 0)
            printf("%d ",num[i]);
    }
}

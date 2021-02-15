#include<stdio.h>
int main()
{
    int i,t,n,m,a,b;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        a=m/4;
        b=m%4;
        b=b/2;
        printf("%d %d",a,b);



    }
}

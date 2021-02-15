#include<stdio.h>
int main()
{
    int c1,i;
    scanf("%d",&c1);

    for(i=1;i<=c1;i++)
    {
        int a,b,c=0,j;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(i%3==0)
                c++;
        }
        pritf("%d",c);
    }
}

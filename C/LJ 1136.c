#include<stdio.h>
int main()
{
    int i,a,b,n,cou=0,j,k,y=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        x=a;
        for(j=1;j<=a;j++)
        {
            for(k=1;k<=x;k++)
            {
               y=k+1;
            }
            x=x+1;
            if(y%3==0)
                cou++;
            if(x==b)
                x==b;
        }
        printf("%d",cou);
    }
}

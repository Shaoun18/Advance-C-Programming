#include<stdio.h>
int main()
{
    int t,i;
    long long int w,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Case %d: ",i+1);
        scanf("%lld",&w);
        if(w%2!=0)
        {
            printf("Impossible\n");
        }
        else
        {
            n=w/2;
            m=2;
            while(n%2==0)
            {
                n=n/2;
                m=m*2;
            }
            printf("%lld %lld\n",n,m);
        }
    }
    return 0;
}

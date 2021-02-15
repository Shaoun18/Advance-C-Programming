#include<stdio.h>
int main()
{
    int i,j,k=1,t,l,r,x=0;;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
          if(j%2>0)
          {
              while(k<=r)
              {
                  if(k%j==0)
                    x++;
                  k=k+1;
              }
          }
        }
        printf("Case %d: %d",i+1,x);
    }
}

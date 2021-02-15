#include<stdio.h>
int main()
{
    int t,x1,y1,x2,y2,m,i,j,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("Case %d:\n",i+1);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d%d",&x,&y);
            if(((x>=x1)&&(x<=x2)) && ((y>=y1)&&(y<=y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}


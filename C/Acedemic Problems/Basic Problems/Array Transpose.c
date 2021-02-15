#include<stdio.h>
int main()
{
    int i,j,a[5][5],t[5][5],r,c;
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\n",t[i][j]);
        }
    }

}

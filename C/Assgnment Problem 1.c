#include <stdio.h>
int main()
{
    int i,j,ar[3][3],min=10*20*50;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ar[i][j]<=min)
                min=ar[i][j];
        }
    }
    printf("Minimum number is %d",min);
}

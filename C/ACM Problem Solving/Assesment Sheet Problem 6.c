#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            continue;
            printf("%d",j);
        }
        if(i==8)
        break;
        printf("%d",i);
    }
}

#include<stdio.h>
int main()
{
    char name[20];
    int i,j,row=10,col=50;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main ()
{
    int i,j,row,col;
    printf("Enter Rows: ");
    scanf("%d",&row);
    printf("Enter Colum: ");
    scanf("%d",&col);
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
    return 0;
}

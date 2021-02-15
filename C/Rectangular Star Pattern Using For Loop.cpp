#include<stdio.h>
int main ()
{
    int i,n1,n2,j;
    printf("Enter Rows for a Rectangle: ");
    scanf("%d",&n1);
    printf("Enter Colums for a Rectangle: ");
    scanf("%d",&n2);

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

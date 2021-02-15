#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
     /* Prints one row of pattern */
       for(j = 0; j <i*i; j++)
        {
           printf("*");
        }
       /* move to next row */
       printf("\n");
    }
    return 0;
}

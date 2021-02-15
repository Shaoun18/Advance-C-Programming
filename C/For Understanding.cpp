#include<stdio.h>

int main(){
    char *str="*******************";
    int i,j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
       printf("%*.*s\n", rows, i+1, str);
    }

    return 0;
}

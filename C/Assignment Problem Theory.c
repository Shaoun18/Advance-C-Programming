#include<stdio.h>
int main()
{
    char a;
    int x=0;
    FILE *check;
    check=fopen("d:\\project\\precords.txt", "r");
    if(check==NULL)
    {
        printf("ERROR");
        exit(1);
    }
    else
    {
        while(fgetc(check)!=EOF)
            x++;
        fclose(check);
    }
    printf("Number of character is %d",x);
}

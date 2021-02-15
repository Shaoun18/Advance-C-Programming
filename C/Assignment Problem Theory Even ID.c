#include<stdio.h>
int main()
{
    char a;
    int b=0;
    FILE *check;
    check=fopen("d:\\project\\precords.txt", "r");
    if(check==NULL)
    {
        printf("ERROR");
    }
    else
        while((a=fgetc(check))!=EOF)
            if(a=='\n')
                b++;
        fclose(check);
    if(b==0)
        printf("Number of line is %d",b);
    else
    {
        b=b+1;
        printf("Number of line is %d",b);
    }
}

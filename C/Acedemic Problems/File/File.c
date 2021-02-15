#include<stdio.h>
int main()
{
    FILE *raihan;
    raihan=fopen("test.txt", "w");

    if(raihan==NULL)
        printf("File Doesent Exist");
    else
        printf("File Creating Done");
        fclose(raihan);
}

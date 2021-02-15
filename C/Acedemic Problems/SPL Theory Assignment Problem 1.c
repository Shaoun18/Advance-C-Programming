#include<stdio.h>
int main()
{
    char c,str[2000];
    int i=0;
    FILE *input;
    input=fopen("d:\\lab\\input.txt", "r");
    if(input==NULL)
    {
        printf("Error! File Missing");
        exit(1);
    }
    else
        while((c=fgetc(input))!=EOF)
        {
            str[i]=c;
            i++;
        }
    fclose(input);
    str[i]='\0';

    FILE *output;
    output=fopen("d:\\lab\\output.txt", "r+");
    if(output==NULL)
    {
        printf("Error! File Missing");
        exit(1);
    }
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            c=str[i];
            if(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u' || c=='A' || c=='E' || c=='I' ||c=='O' || c=='U')
                fprintf(output,"%c",c);
        }
        fclose(output);

    }
    output=fopen("d:\\lab\\output.txt", "r");
    while((c=fgetc(output)) != EOF)
        putchar(c);
    fclose(output);

}

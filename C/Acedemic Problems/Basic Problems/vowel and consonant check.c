#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int word=0,i=0;

    while(str[i]!='\0')
    {
        if(str[i]==' ')
            word++;
        i++;
    }
    word++;
    printf("%d",word);
}

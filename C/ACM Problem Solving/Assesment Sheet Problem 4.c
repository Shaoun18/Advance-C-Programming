#include<stdio.h>
int main()
{
    int l=0,i=0;
    char str[200];
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
            l++;
            i++;
    }
    l++;
    printf("Number of words: %d",l);
}

#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    int i=0,c=1,d=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            c++;
        if(str[i]==str[i+1])
            d++;
        i++;
    }
    c=c-d;
    printf("%d",c);
}

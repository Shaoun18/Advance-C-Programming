#include<stdio.h>
int main()
{
    char n[100];

    gets(n);

    int i=0,c=0;

    for(i;n[i]!='\0';i++)
    {
        c++;
    }
    printf("%d",c);
}

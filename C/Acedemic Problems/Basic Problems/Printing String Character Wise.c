#include<stdio.h>
int main()
{
    char name[100],i;
    gets(name);

    for(i=0;name[i]!='\0';i++)
    {
        printf("%c\n",name[i]);
    }
}

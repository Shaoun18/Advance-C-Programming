#include<stdio.h>
int main()
{
    char name[100],name1[100];
    gets(name);

    int i;

    for(i=0;name[i]!='\0';i++)
    {
        name1[i]=name[i];
    }

    printf("%s",name1);
}

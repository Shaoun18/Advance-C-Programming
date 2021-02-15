#include<stdio.h>
int main()
{
    char name1[100],name2[100];
    gets(name1);

    strcpy(name2,name1);

    printf("%s",name2);

}

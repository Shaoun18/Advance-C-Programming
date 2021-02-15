#include<stdio.h>
int main()
{
    char a[20],a1[10];
    gets(a);
    gets(a1);

    int i=0,j=0,len=0;

    for(i;a[i]!='\0';i++)
    {
        len++;
    }

    for(j;a1[j]!='\0';j++)
    {
        a[len+j]=a1[j];
    }

    printf("%s",a);
}

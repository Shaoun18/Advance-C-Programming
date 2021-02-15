#include<stdio.h>
int main()
{
    char a[10],a1[10];
    gets(a);
    gets(a1);

    strcat(a,a1);

    printf("%s",a);
}

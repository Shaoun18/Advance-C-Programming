#include<stdio.h>
int main()
{
    char a[100];
    gets(a);

    int l=strlen(a);

    printf("%d",l);
}

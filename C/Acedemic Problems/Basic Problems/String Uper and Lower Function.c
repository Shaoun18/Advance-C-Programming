#include<stdio.h>
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);

    strupr(a);
    strlwr(b);

    printf("Uper: %s\nLower: %s",a,b);
}

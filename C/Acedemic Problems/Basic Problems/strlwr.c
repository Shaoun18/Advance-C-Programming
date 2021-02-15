#include<stdio.h>
int main()
{
    char str[20];
    gets(str);

    strlwr(str);
    printf("%s",str);
}

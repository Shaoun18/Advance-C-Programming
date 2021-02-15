#include<stdio.h>
int main()
{
    char f;
    scanf("%c",&f);

    if ((f>='a' && f<='z') || (f>='A' && f<='Z'))
        printf("%c is an alphabet",f);
    else
        printf("f is not an alphabet");

    return 0;
}

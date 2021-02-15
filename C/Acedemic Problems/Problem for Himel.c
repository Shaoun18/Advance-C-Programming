#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='r' || n=='R')
        printf("Red");
    else if(n=='g' || n=='G')
        printf("Green");
    else if(n=='b' || n=='B')
        printf("Blue");

    return 0;
}

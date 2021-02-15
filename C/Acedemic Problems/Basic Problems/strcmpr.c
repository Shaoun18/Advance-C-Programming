#include<stdio.h>
int main()
{
    char a[20],b[20];
    int c;
    gets(a);
    gets(b);
    c=strcmp(a,b);
    if(c==0)
        printf("Strin are same");
    else
        printf("Strin are not same");
}

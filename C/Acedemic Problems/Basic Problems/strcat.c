#include<stdio.h>
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);
    strcat(a,b);
    //printf("%s\n",a);
    printf("%s",a);
}

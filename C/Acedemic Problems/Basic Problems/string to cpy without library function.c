#include<stdio.h>
int main()
{
    char a[20],b[20];
    int i=0;
    gets(a);

    while(a[i]=='\0')
    {
        b[i]=a[i];
        i++;
    }

    printf("%s",b);
}

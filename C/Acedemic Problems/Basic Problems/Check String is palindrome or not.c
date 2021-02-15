#include<stdio.h>
int main()
{
    char str[30];
    char str1[30];
    gets(str);

    int i,j,c=0;

    c=strlen(str);
    for(i=0,j=c-1;str[i]!='\0',j>=0;i++,j--)
    {
        str1[i]=str[j];
    }
    printf("%s\n",str1);

    int d;
    d=strcmp(str,str1);
    if(d==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    getch();

}

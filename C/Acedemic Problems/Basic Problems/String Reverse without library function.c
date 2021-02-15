#include<stdio.h>
int main()
{
    char str[100],str2[100];
    gets(str);
    int i,j,c=0;
    c=strlen(str);
    for(i=0,j=c-1;j>=0;i++,j--)
    {
        str2[i]=str[j];
    }
    str2[i]='\0';
    printf("%s",str2);
}



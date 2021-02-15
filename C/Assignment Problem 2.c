#include<stdio.h>
int main()
{
    char str[100],str2[100];
    gets(str);
    int i,j,d=0;

    for(i=0;str[i]!='\0';i++)
    {
        d++;
    }
    for(i=d-1,j=0;j<d;i--,j++)
    {
       str2[j]=str[i];
    }
    str2[j]='\0';
    printf("%s",str2);
}

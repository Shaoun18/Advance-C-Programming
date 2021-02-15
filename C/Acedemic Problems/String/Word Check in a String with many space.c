#include<stdio.h>
int main()
{
    char str[100];
    int i,j=0,c=1,result=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            c++;
        if(str[i]==str[i+1])
            j++;
    }
    result=c-j;
    printf("%d",result);
}

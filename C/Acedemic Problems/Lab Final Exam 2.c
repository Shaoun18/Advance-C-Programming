#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' &&  str[i]<='z') || (str[i]>='A' &&  str[i]<='Z'))
            count++;
    }
    printf("%d",count);
    return 0;
}

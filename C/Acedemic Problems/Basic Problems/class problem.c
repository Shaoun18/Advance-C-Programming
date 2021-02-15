#include<stdio.h>
int main()
{
    char str[100],n,i=0,c=0;
    gets(str);
    printf("Enter: ");
    scanf("%c",&n);

    while(str[i]!='\0')
    {
        if(str[i]==n)
            c++;
        i++;
    }
    printf("%d",c);
}

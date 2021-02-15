#include<stdio.h>
void printer(char *c)
{
    int i;
    for(i=26;i>0;i--)
    {
        printf("%c",c);
    }
}
int main()
{
    char c='a';
    char arr[26];
    int i;
    for(i=c;i<'z';i++)
    {
        scanf("%c",&arr[i]);
    }
    printer(arr);
}

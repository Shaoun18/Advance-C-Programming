#include<stdio.h>
int main()
{
    char a[20],a1[20];
    gets(a);
    int i,j,c=0,k;
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(j=0,i=c-1;i>=0;j++,i--)
    {
        a1[j]=a[i];
    }
    a1[j]='\0';
    int d=strcmp(a1,a);

    if(d==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}

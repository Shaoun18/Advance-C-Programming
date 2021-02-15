#include<stdio.h>
int main()
{
    char str[10],str2[10];
    gets(str);
    strcpy(str2,str);
    strrev(str);
    int i=strcmp(str,str2);
    if(i==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}

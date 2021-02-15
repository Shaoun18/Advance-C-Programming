#include<stdio.h>
int main()
{
    char str1[20],str2[20],str3[20];
    gets(str1);
    gets(str2);

    strcpy(str3,str1);
    strcpy(str1,str2);
    strcpy(str2,str3);

    printf("String 1: %s\n",str1);
    printf("String 2: %s",str2);
}

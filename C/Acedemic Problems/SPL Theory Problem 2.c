#include<stdio.h>
int main()
{
    char str1[100]="Hello ",str2[100]="world!",str3[100];
    strcat(str1,str2);
    strcpy(str3,str1);
    strcpy(str1,"Hello Bangladesh!");
    strncpy(str2,"Final Exam!",7);
    puts(str3);
    puts(str1);
    puts(str2);

}

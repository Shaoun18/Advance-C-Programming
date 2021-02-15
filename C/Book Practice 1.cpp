#include<stdio.h>
#include<conio.h>
int main ()
{
    char n;
    printf("Enter A Single Character: ");
    scanf("%c",&n);

    if(n<='z' && n>='a' || n>='A' && n<='Z')
        printf("Its A Alphabetic Character: ");
    else if(n<=9 && n>=0)
        printf("Its A Digit");
    else
        printf(" Its A Special Character");

    getch ();
}

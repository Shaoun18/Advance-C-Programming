#include<stdio.h>
int main ()
{
    char n;
    printf("Enter a letter: ");
    scanf("%c",&n);
    switch(n)
    {
    case 'a':printf("vowel");
            break;
    case 'e':printf("vowel");
            break;
    case 'i':printf("vowel");
            break;
    case 'o':printf("vowel");
            break;
    case 'u':printf("vowel");
            break;
    default :printf("consonent");
            break;
    }
    return 0;
}

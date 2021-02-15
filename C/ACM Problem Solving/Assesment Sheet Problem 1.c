#include<stdio.h>
int main()
{
    char n;

    scanf("%c",&n);
    switch(n)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonent");
    }
    return 0;
}

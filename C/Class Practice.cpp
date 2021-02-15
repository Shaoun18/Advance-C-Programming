#include<stdio.h>
int main ()
{
    char n;
    printf("Enter Choice: ");
    scanf("%c",&n);

    switch(n)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonent");
    }
    return 0;
}

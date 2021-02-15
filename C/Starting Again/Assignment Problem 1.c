#include<stdio.h>
int main()
{
    char n;
    printf("Enter Your Gender: ");
    scanf("%c",&n);

    switch(n)
    {
        case 'm':
            printf("Male");
            break;
        case 'M':
            printf("Male");
            break;
        case 'f':
            printf("Female");
            break;
        case 'F':
            printf("Female");
            break;
        default:
            printf("Other");
    }
    getch();
}

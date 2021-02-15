#include<stdio.h>
void name()
{
    printf("Hello");
}
int main ()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1 :printf("SAT");
            break;
    case 2 :printf("SUN");
            break;
    case 3 :printf("MON");
            break;
    case 4 :printf("TUE");
            break;
    case 5 :printf("WED");
            break;
    case 6 :printf("THU");
            break;
    case 7 :name();
            break;
    default:printf("WRONG");
            break;
    }
    return 0;
}

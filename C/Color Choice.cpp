#include<stdio.h>
int main ()
{
    char c;
    printf("Enter color: ");
    scanf("%c",&c);

    switch(c)
    {
    case 'r' :printf("red");
            break;
    case 'g' :printf("Green");
            break;
    case 'b' :printf("blue");
            break;
    default:printf("wrong choice");
    }
    return 0;


}

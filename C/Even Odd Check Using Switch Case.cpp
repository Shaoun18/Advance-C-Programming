#include<stdio.h>
int main ()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    switch(n%2)
    {
    case 0 :printf("Even");
            break;
    case 1 :printf("Odd");
            break;
    default:printf("wrong number");
    }
    return 0;


}

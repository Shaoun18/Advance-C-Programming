#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num%7==0)
        printf("The number divided by 7");

    else
        printf("The number is not divided by 7");
    return 0;
}

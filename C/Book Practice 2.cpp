#include<stdio.h>
#include<conio.h>
int main ()
{
    char opr;
    float v1,v2;

        printf("Enter Operator: ");
    scanf("%c",&opr);

    printf("Enter Value 1: ");
    scanf("%f",&v1);
        printf("Enter Value 2: ");
    scanf("%f",&v2);

    if(opr=='+')
        printf("The Sum Of Two Number is %f",v1+v2);

    else if(opr=='-')
        printf("The Sub Of Two Number is %f",v1-v2);

    else if(opr=='*')
        printf("The Mul Of Two Number is %f",v1*v2);

    else if(opr=='/')
        printf("The Div Of Two Number is %f",v1/v2);

    else
        printf("Syntax Error");

    getch ();

}

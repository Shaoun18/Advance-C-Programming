#include<stdio.h>
int main ()
{
    int a,b,result;
    char opr;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter operation: ");
    scanf(" %c",&opr);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    switch(opr)
    {
    case '+':
            result=a+b;
            break;
    case '-':
            result=a-b;
            break;
    case '*':
            result=a*b;
            break;
    case '/':
            result=a/b;
            break;
    default :
            printf("Error!");
    }
    printf("Result is: %d",result);
    return 0;

}

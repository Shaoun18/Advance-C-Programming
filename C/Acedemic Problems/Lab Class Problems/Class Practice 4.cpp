#include<stdio.h>
int main ()
{
    char opr;

    printf("Enter Operator: ");
    scanf("%c",&opr);

    int num1,num2,result;

    printf("Enter 1st and 2nd number: ");
    scanf("%d %d",&num1,&num2);

    switch(opr)
    {
    case '+':
            result=num1+num2;
            printf("%d",result);
            break;
    case '-':
            result=num1-num2;
            printf("%d",result);
            break;
    case '*':
            result=num1*num2;
            printf("%d",result);
            break;
    case '/':
            result=num1/num2;
            printf("%d",result);
            break;
    }
    return 0;
}

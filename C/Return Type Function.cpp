#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b);
int main ()
{
    int num1,num2,sum;
    printf("Enter Two Number: ");
    scanf("%d %d",&num1,&num2);
    sum=add(num1,num2);
    printf("The Sum Is:%d",sum);

    return 0;
}

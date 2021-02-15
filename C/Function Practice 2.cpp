#include<stdio.h>
void add ();
int main ()
{
    add();
}
void add ()
{
    int num1,num2,sum;
    printf("Enter Number: ");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    printf("%d",sum);
}

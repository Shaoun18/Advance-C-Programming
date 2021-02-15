#include<stdio.h>
int main ()
{
    int num1,num2,sum,sub,div,mul,mod,avg;
    printf("Enter num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    avg=sum/2;

    printf("Sum=%d\nSub=%d\nMul=%d\nDiv=%d\nMod=%d\nAverage=%d",sum,sub,mul,div,mod,avg);
    return 0;
}

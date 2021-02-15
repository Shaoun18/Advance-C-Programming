#include<stdio.h>
int sum (int x,int y)
{
    return x+y;
}
int sub (int x,int y)
{
    return x-y;
}
int mul (int x,int y)
{
    return x*y;
}
int main ()
{
    int a,b,result;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("%d\n",result);

    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    result=sub(a,b);
    printf("%d\n",result);

    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    result=mul(a,b);
    printf("%d\n",result);



}


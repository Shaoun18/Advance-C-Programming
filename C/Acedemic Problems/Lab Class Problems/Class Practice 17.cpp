#include<stdio.h>
int sum()
{
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);

    printf("The Sum is %d\n",a+b);

}
int sub()
{
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);

    printf("The Sub is %d\n",a-b);
}
int mul()
{
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);

    printf("The Mul is %d\n",a*b);
}
int main ()
{
    sum();
    sub();
    mul();


    return 0;
}



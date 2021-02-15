#include<stdio.h>
int sum(int a,int b)
{
    printf("The Sum Is %d\n",a+b);
}
void sub(int a,int b)
{
        printf("The Sub Is %d\n",a-b);
}
void mul(int a,int b)
{
    printf("The Mul Is %d\n",a*b);
}
int main ()
{
    int x,y;
    printf("Enter Two Number For Sum: ");
    scanf("%d %d",&x,&y);
    sum(x,y);

    printf("Enter Two Number For Sub: ");
    scanf("%d %d",&x,&y);
    sum(x,y);

    printf("Enter Two Number For Mul: ");
    scanf("%d %d",&x,&y);
    sum(x,y);

    return 0;
}




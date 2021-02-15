#include<stdio.h>
#include<conio.h>
void xtoy(double base,double exp)
{
    double i,result=1;
    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("Result Is %.1lf",result);
}
int main()
{
    double x,y;
    printf("Enter Base: ");
    scanf("%lf",&x);

    printf("Enter Exponent: ");
    scanf("%lf",&y);

    xtoy(x,y);

    getch ();
}

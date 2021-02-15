#include<stdio.h>
#include<conio.h>
double area_of_triangle(double base,double height)
{
    double area;
    return area=0.5*base*height;
}
int main()
{
    double h,b;

    printf("Enter Base: ");
    scanf("%lf",&b);
    printf("Enter Height: ");
    scanf("%lf",&h);


    printf("Area=%.1f",area_of_triangle(b,h));

    getch();
}

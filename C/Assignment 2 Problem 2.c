#include<stdio.h>
double swap(double *a, double *b);
int main ()
{
    double x,y;
    printf("Enter Value: ");
    scanf("%lf %lf",&x,&y);

    printf("%lf is lowest",swap(&x,&y));


    return 0;

}
double swap(double *a, double *b)
{
    double x;
    x=*a;
    *a=*b;
    *b=x;

    if(*a<*b)
        return *a;
    else
        return *b;
}

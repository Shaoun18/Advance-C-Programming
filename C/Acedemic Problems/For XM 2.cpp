#include<stdio.h>
double swap(double *a,double *b);
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    swap(&a,&b);

    printf("A=%.2lf\nB=%.2lf\n",a,b);
    printf("%.2lf is lowest",swap(&a,&b));

    return 0;

}
double swap(double *a,double *b)
{
    double c;
    c=*a;
    *a=*b;
    *b=c;

    if(*a<*b)
        return *a;
    else
        return *b;
}


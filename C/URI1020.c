#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,p1,p2;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    p1=pow(2,x2-x1);
    p2=pow(2,y2-y1);
    printf("%.4lf\n",sqrt(p1+p2));

    return 0;
}

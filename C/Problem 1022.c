#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    double r,area,circle,square;
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&r);
        circle=2*acos(0.0)*r*r;
        square=(2*r)*(2*r);
        area=square-circle;
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}

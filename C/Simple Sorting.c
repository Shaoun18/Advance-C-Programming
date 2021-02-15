#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && b<c)
        printf("%d\n%d\n%d",a,b,c);
    else if(b<a && a<c)
        printf("%d\n%d\n%d",b,a,c);
    else if(c<a && a<b)
        printf("%d\n%d\n",c,a,b);
}

#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter 4 number: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
        printf("%d is largest",a);

        else if (b>a && b>c && c>d)
            printf("%d is largest",b);

        else if(c>a && c>b && c>d)
            printf("%d is largest",c);
    else
        printf("%d is largest",d);
    return 0;
}

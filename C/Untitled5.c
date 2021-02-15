#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter two value: ");
    scanf("%d %d",&a,&b);

    if(a>b)
    c++;

    switch(c)
    {
        case 0:printf("%d is largest",b);
        break;
        case 1:printf("%d is largest",a);
        break;
        default:printf("Equal");
    }
    return 0;
}

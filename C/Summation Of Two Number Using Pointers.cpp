#include<stdio.h>
int main ()
{
    int a,b,*p,*p1;

    printf("Enter TWo Number: ");
    scanf("%d %d",&a,&b);

    p=&a;
    p1=&b;

    printf("The Sum Is %d",*p+*p1);

    return 0;
}

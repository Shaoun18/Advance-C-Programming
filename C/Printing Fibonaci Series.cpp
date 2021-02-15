#include<stdio.h>
int main ()
{
    int i,n,a=0,b=1,next;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
    printf("%d\n",a);
    next=a+b;
    a=b;
    b=next;
    }
    return 0;
}

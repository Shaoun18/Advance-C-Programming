#include<stdio.h>
int main()
{
    int i,next,a=1,b=1,c=1;
    printf("%d\n%d\n%d",a,b,c);
    for(i=0;i<10;i++)
    {
        next=a+b+c;
        printf("\n%d",next);
        a=b;
        b=c;
        c=next;
    }
}

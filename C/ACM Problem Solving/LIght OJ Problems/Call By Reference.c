#include<stdio.h>
void swao(int *a,int*b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;

}
int main()
{
    int c,d;
    scanf("%d %d",&c,&d);
    swao(&c,&d);
    printf("a=%d\nb=%d",c,d);
}

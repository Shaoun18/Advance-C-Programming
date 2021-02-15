#include<stdio.h>
int sum(int *a,int *b)
{
    int x,z;
    x=*a;
    *a=*b;
    *b=x;
    return z=*a+*b;
}
int main()
{
    int n,n1,next;
    printf("Enter Two Valu: ");
    scanf("%d %d",&n,&n1);

    next=sum(&n,&n1);
    //printf("%d\n",n);
    //printf("%d\n",n1);
    printf("%d\n",next);

    return 0;


}

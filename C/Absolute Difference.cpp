#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter value of x and y: ");
    scanf("%d %d",&x, &y);
    if(x>y)
        printf("Absolute difference of %d and %d is %d",x,y,x-y);
    else
        printf("Absolute difference of %d and %d is %d",y,x,y-x);
    return 0;
}

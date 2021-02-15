#include<stdio.h>
int GetSum(int a, int b)
{

    return a+b;
}
int main()
{
    int x,y;
    printf("Enter Two Number: ");
    scanf("%d %d",&x,&y);

    printf("%d",GetSum(x,y));
}

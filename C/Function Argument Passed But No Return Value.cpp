#include<stdio.h>
void GetSum(int a,int b)
{
    printf("The Sum Is %d",a+b);
}
int main()
{
    int x,y;
    printf("Enter Two Number: ");
    scanf("%d %d",&x,&y);

    GetSum(x,y);
}


#include<stdio.h>
void swp(int *n1,int *n2)
{
    int s;
    s=*n1;
    *n1=8;
    *n2=10;
}
int main()
{
    int num1,num2;
    printf("Enter Two Number: ");
    scanf("%d %d",&num1,&num2);

    swp(&num1,&num2);
    printf("Number 1=%d\n",num1);
    printf("Number 2=%d",num2);

    return 0;

}

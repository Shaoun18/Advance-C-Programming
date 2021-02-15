#include<stdio.h>
int GetSum()
{
    int x,y;
    printf("Enter Two Number: ");
    scanf("%d %d",&x,&y);

    return x+y;
}
int main()
{
    printf("The Sum Is %d",GetSum());

    return 0;

}

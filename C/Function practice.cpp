#include<stdio.h>
#include<conio.h>
int sum(int x, int y)
{
    return x+y;
}
int sub(int a,int b)
{
    return a-b;
}

int sum(int a,int b);
int sub(int a,int b);
int main ()
{
    int n1,n2;
    printf("Enter Two number:");
    scanf("%d %d",&n1,&n2);

    printf("The Sum is:%d\n",sum(n1,n2));

    printf("Enter Two number:\n");
    scanf("%d %d",&n1,&n2);

    printf("The Sub is:%d",sub(n1,n2));

    getch();
    return 0;

}


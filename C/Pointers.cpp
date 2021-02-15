#include<stdio.h>
#include<conio.h>
int main ()
{
    int a=5,b=20, c=30;
    int *p;
    p=&a;
    printf("%d\n",*p); //printing pointers value
    printf("%d\n",&p);//printing pointers adress
    printf("%d\n",&a); //printing a variables adress

    p=&a;
    printf("%d\n",*p);

    p=&b;
    printf("%d\n",*p);

    p=&c;
    printf("%d\n",*p);

    getch();
}

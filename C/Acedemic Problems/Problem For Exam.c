#include<stdio.h>
struct mystruct
{
    int m;
    char n;
    double o;
};
int main()
{
   struct mystruct ob1,*ob2;
    ob2=&(ob1);
    ob1.m=10;
    ob1.n='a';
    ob1.o=10.22;
    printf("%d %c %.2lf",ob1.m,ob1.n,ob1.o);

   return 0;
}

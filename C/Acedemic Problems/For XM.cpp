#include<stdio.h>
int main()
{
    int a;
    char c;
    double e;
    a=1;
    c='m';
    e=12.30;
    if(a>0 && c<='m' && e==12.30)
    {
        int b;
        char d;
        double f;
        scanf("%c %lf %d",&d,&f,&b);
        printf("The inputs are: \n");
        printf("%c \n %d \n %lf \n",d,b,f);
        printf("%c \n %d \n %lf \n",c,a,e);
    }
    return 0;
}

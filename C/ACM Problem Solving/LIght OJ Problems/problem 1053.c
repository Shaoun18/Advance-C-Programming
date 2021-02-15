#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);

    if(pow(c,2)==pow(a,2)+pow(b,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(a,2)==pow(c,2)+pow(b,2))
        printf("Yes");
    else
        printf("No");
}

#include<stdio.h>
int main ()
{
    int a,b,c=0;
    printf("Enter Two Value: ");
    scanf("%d %d",&a,&b);

    if(a>b)
    c++;
    switch(c)
    {
        case 1:printf("%d is largest",a);
        break;
        case 0:printf("%d is largest",b);
        break;
        default:printf("Error");
    }


    return 0;
}

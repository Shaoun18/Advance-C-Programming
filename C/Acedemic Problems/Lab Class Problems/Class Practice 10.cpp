#include<stdio.h>
int main ()
{
    int i=1,c,sum=0,n;
    printf("Enter n: ");
    scanf("%d",&n);

    do
    {
        sum=sum+2;
        printf("%d\n",sum);
    i++;
    }while(i<=n);

    return 0;
}

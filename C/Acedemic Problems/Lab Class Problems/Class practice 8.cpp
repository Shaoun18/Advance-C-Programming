#include<stdio.h>
int main()
{
    int n,i,mul=0,sum=0;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        mul=mul+i;
        sum=sum+mul;
       printf("%d \n",sum);
    }
    return 0;
}

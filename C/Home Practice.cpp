#include<stdio.h>
int main ()
{
    int i,n,c=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
        break;
    }
    {
    if(c==0)
        printf("%d is Prime",n);
    else
        printf("Non Prime");
    }

    return 0;
}

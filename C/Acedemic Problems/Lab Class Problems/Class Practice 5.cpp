#include<stdio.h>
int main ()
{
    int i,n,fact=1;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      fact=fact*i;
      printf("%d\n",fact);
    }
    printf("%d",fact);
    return 0;
}

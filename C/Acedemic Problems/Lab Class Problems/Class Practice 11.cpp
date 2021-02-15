#include<stdio.h>
int main ()
{
    int i,sum=0;
    i=20;
    while(i>=5)
    {
        sum=sum+i;
        i=i-5;
        printf("%d\n",sum);
    }
    printf("Total Result %d\n",sum);

    return 0;
}


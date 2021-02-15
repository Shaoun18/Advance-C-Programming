#include<stdio.h>
main ()
{
    int  i,j,n,count;
    printf("Enter Limits: ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        count=1;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            count=0;
        }
        if(count!=0)
            printf("%d\n",i);
    }
}

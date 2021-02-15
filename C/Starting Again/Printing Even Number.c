#include<stdio.h>
void main()
{
    int i;
    for(i=2;i<=30;i++)
    {
       if(i%2==0)
        printf("%d",i);
       else
        printf("\n");
    }

    getch();
}

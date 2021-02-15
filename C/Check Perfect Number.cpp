#include<stdio.h>
int main ()
{
    int i=1,sum=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<num)
    {
        if(i%num==0)
        {
        sum=sum+i;
        }
        i++;
    }
    if(sum==num)
        printf("%d is a perfect number",i);
    else
        printf("%d is is not perfect number",i);
    return 0;
}

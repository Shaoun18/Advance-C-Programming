#include<stdio.h>
int main()
{
    int i,n,r,s=0;

    printf("Enter The Number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        s=s*10+r;
    }
    if(s==n)
    {
        printf("%d is a Palindrome Number",n);
    }
    else
    {
        printf("%d is not a Palindrome Number",n);
    }
    return 0;
}

#include<stdio.h>
int recurse_odd(int z,int b,int n);
int main()
{
    int b=1,n,z=1;
    printf("Enter Limit: ");
    scanf("%d",&n);
    recurse_odd(z,b,n);

    getch();
}
int recurse_odd(int z,int b,int n)
{
    if(b==n)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d ",z);
        recurse_odd(z+2,b+1,n);
    }

}

#include<stdio.h>
int main()
{
    int arr[10]={29,10,30,45,60,70,45,78,98,76},n,i,r=0;
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
            r=i+1;

    }
    printf("Array Position %d",r);
}

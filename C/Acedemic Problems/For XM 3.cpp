#include<stdio.h>
int main()
{
    int arr[10];
    int i,j=5;
    int *point=arr;
    for(i=0;i<=5;i++)
    {
        *point=i;
        *(point+5)=i*i;
        point++;
    }
    for(i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

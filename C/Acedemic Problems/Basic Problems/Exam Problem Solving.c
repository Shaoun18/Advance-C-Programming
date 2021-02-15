#include<stdio.h>
int main()
{
    int arr[20],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]<0)
            if(arr[j]%4 ==0)
                printf("%d",arr[j]);
    }
}

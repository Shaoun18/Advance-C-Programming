#include<stdio.h>
int quick_sort(int *arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int p;
    p=partition(&arr,low,high);
    quick_sort(&arr,low,p-1);
    quick_sort(&arr,p+1,high);
}
int partition(int *arr[],int low,int high)
{
    int i,j,t,pivot;
    pivot=*arr[high];
    i=low-1;
    for(j=0;j<high;j++)
    {
        if(*arr[j]<pivot)
        {
            i=i+1;
            t=*arr[j];
            *arr[j]=*arr[i];
            *arr[i]=t;
        }
    }
    t=*arr[high];
    *arr[high]=arr[i+1];
    *arr[i+1]=t;
    return i+1;

}
int main()
{
    int arr[20],n=10,low=0,high=n-1,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(&arr,low,high);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
}

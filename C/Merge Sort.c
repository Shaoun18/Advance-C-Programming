#include<stdio.h>
int merge_sort(int arr[],int left,int right)
{
  if(left>=right)
  {
      return;
  }
  int  mid=(left+right)/2;

  merge_sort(arr,left,mid);
  merge_sort(arr,mid+1,right);

  merge(arr,left,mid,right);
}
int merge(int arr[],int left,int mid,int right)
{
    int i;
    int size_left,size_right;
    size_left=mid-left+1;
    size_right=right-mid;
    int a[size_left+1],l[size_right+1];
    for(i=0;i<size_left;i++)
    {
        a[i]=arr[left+i-1];
    }
    for(i=0;i<size_right;i++)
    {
        l[i]=arr[mid+i];
    }
    int k,j=0;
    i=0;
    for(k=0;k<right;k++)
    {
        if(a[i]<=l[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=l[j];
            j++;
        }
    }
    return arr;
}
int main()
{
    int i,arr[20],n=10,left=0,right=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,left,right);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

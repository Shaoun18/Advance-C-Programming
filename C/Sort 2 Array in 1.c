#include<stdio.h>
int main()
{
    int a[8]={1,4,5,8,9,15,16,24},b[8]={2,3,6,7,12,13,19,27},c[16],k,i=0,j=0;
    for(k=0;k<16;k++)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i=i+1;
        }
        else
        {
            c[k]=b[j];
            j=j+1;
        }
    }
    for(i=0;i<16;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}

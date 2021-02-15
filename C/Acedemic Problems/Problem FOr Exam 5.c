#include<stdio.h>
int myfunc2(int m)
{
    if(m==0)
        return 0;
    else
    {
        int a=myfunc(m-1);
        printf("%d",a);
    }
    return myfunc2(m-1);

}
int myfunc(int i)
{
    if(i==0)
        return 0;
    if(i==1)
        return 1;
    else
    {
        return myfunc(i-1)+myfunc(i-2);
    }
}
int main()
{
    myfunc2(10);
    return 0;
}

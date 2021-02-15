#include<stdio.h>
int main()
{
    int m=40,n=20;
    int o=20,p=30;

    if(m>n && m==0)
    {
        printf("&& Operator: Both Conditions are true\n");

        if(o>p || p!=20)
        {
            printf("|| Operator: Only one condition is true\n");
        }
    }
    else if(!(m>n && m != 0))
    {
        printf("! Operator: Both Conditon are true");
    }
    else
    {
        printf("! Operator: Both condition are true. \" But, status is inverted as false");
    }
}

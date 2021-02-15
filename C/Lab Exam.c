#include<stdio.h>
int producer(int buffer[],int *top,int data,int n)
{
    if(*top==n)
    {
        printf("Overflow");
    }
    else
    {
        buffer[*top]=data;
        *top=*top+1;
    }
    return buffer;
}
int consumer(int buffer,int*top)
{
    if(*top==-1)
    {
        printf("Underflow");
    }
    else
    {
        *top=*top-1;
    }
    return buffer;
}
int display(int buffer[],int top)
{
    int i;
    for(i=0;i<top;i++)
    {
        printf("%d\n",buffer[i]);
    }
    printf("Back\n");
}
int main()
{
    while(1)
    {
    int buffer[20],n=10,top=0,data,c;
    printf("1: Produce\n");
    printf("2: Consume\n");
    printf("3: Display\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            scanf("%d",&data);
            producer(buffer,&top,data,n);
            break;
        }
    case 2:
        {
            consumer(buffer,&top);
            break;
        }
    case 3:
        {
            display(buffer,top);
            break;
        }
    }
    }
}

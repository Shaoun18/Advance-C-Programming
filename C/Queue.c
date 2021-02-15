#include<stdio.h>
int value_push(int arr[],int *front,int *rear,int item,int n)
{
    if(*rear==n)
    {
        printf("Queue overflow");
    }
    else
    {
        arr[*rear]=item;
        *rear=*rear+1;
    }
    return arr;
}
int value_pop(int arr[],int *front,int *rear,int n)
{
    if(*front==*rear)
    {
        printf("Underflow");
    }
    else
    {
        *front=*front+1;
    }
}
void display(int arr[],int front,int rear)
{
    int i;
    for(i=front;i<rear;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[20],front=0,rear=0,item,c,n=10,*p;
    while(1)
    {
    printf("Enter Choice:\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            printf("Enter iteM:\n");
            scanf("%d",&item);
            p=value_push(arr,&front,&rear,item,n);
            break;
        }
    case 2:
        {
            p=value_pop(arr,&front,&rear,n);
            break;
        }
    case 3:
        {
            display(arr,front,rear);
            break;
        }
    }
    }
}

#include<stdio.h>
int *Stack_Push(int arr[],int *top,int item,int max)
{
    if(*top<max)
    {
        arr[*top]=item;
        *top=*top+1;
    }
    else
        printf("Stack Overflow\n");
    return arr;

}
int *Stack_Pop(int arr[],int *top,int max)
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        *top=*top-1;
    }
    return arr;
}
void *display(int *p,int *top)
{
    int i,c;
    for(i=0;i<*top;i++)
    {
        printf("%d\n",*p);
        *p++;
    }
}
int main()
{
    int i,arr[20],item,top=0,max=10,*p,c;
    while(1)
    {
    printf("\n1 > Stack Push\n");
    printf("2 > Stack Pop\n");
    printf("3 > Stack Display\n");

    scanf("%d",&c);
    switch(c)
    {

        case 1:
            {
                printf("\nEnter Value\n");
                scanf("%d",&item);
                p=Stack_Push(arr,&top,item,max);
                break;
            }
        case 2:
            {
                p=Stack_Pop(arr,&top,max);
                break;
            }
        case 3:
            {
                display(p,&top);
                break;
            }
    }
    }
    return 0;
}

#include<stdio.h>
int main ()
{
    int i,value,posi=-1,num[]={10,20,30,40,50,59};

    printf("Enter Value: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            posi=i+1;
            break;
        }
    }
    if(posi==-1)
        printf("Not Found");
    else
        printf("The Position Of %d is %d",value,posi);
    return 0;
}

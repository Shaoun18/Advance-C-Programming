#include<stdio.h>
struct emp
{
    int id;
    float sallary;
};
int main()
{
    struct emp u[5];
    int i,id,c=0;
    char x;
    for(i=0;i<5;i++)
    {
        printf("Enter ID: ");
        scanf("%d",&u[i].id);
        printf("Enter Sallary: ");
        scanf("%f",&u[i].sallary);
    }
    printf("want change any information(y/n)?\n");
    x=getche();
    if(x=='y')
    {
        printf("Enter ID: ");
        scanf("%d",&id);

        for(i=0;i<5;i++)
        {
            if(id==u[i].id)
            {
                printf("Enter Sallary: ");
                scanf("%f",&u[i].sallary);
            }
        }
        for(i=0;i<5;i++)
        {
            printf("ID: %d\n",u[i].id);
            printf("Sallary: %.4f\n",u[i].sallary);
        }
    }
    else if(x=='n')
    {
        for(i=0;i<5;i++)
        {
            printf("%d\n",u[i].id);
            printf("%f\n",u[i].sallary);
        }
    }
}

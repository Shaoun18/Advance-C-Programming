#include<stdio.h>
struct pa
{
    int id;
    float age;

};
int main()
{
    struct pa u[10];
    int i;
    float age2=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&u[i].id);
        scanf("%f",&u[i].age);
    }
    for(i=0;i<10;i++)
    {
        if(u[i].age<30)
            printf("%d\n",u[i].id);
    }
    for(i=0;i<10;i++)
    {
        if(u[i].id==3 || u[i].id==5 || u[i].id==7)
            age2=age2+u[i].age;
    }
    printf("%.2f",age2);

    return 0;
}

#include<stdio.h>
struct user
{
    char name[20];
    int sallary;
};
int main()
{
    struct user user[3];
    int i,d,l=0;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        gets(user[i].name);
        scanf("%d",&user[i].sallary);
    }
    for(i=0;i<3;i++)
    {
        if(user[i].sallary>l)
            l=user[i].sallary;
            d=i;
    }
    printf("%d",d);
    //printf("%s\n",user[d].name);
    //printf("%d",user[d].sallary);
}

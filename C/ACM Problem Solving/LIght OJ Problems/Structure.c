#include<stdio.h>
struct per
{
    char name[20];
    int age;
};
int main()
{
    struct per per1,per2;
    gets(per1.name);
    scanf("%d",&per1.age);

    printf("Name %s\n",per1.name);
    printf("Age %d",per1.age);
}

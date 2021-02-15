#include<stdio.h>
struct user
{
    char name[10];
    float price;
    int page;
}user1,user2;
int main()
{
    scanf("%s",&user1.name);
    scanf("%f",&user1.price);
    scanf("%d",&user1.page);

    scanf("%s",user2.name);
    scanf("%f",&user2.price);
    scanf("%d",&user2.page);

    printf("%s\n",user1.name);
    printf("%f\n",user1.price);
    printf("%d\n",user1.page);

    printf("%s\n",user2.name);
    printf("%f\n",user2.price);
    printf("%d\n",user2.page);


}

#include<stdio.h>
struct user
{
    char name[50];
    char email[50];
    int number;
};
int main()
{
    struct user user[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s",&user[i].name);
        scanf("%s",&user[i].email);
        scanf("%d",&user[i].number);
    }

    printf("Check User Information!\n");
    char str[50];
    gets(str);

    for(i=0;i<5;i++)
    {
        if(str==user[i].name)
            printf("%s\n",user[i].name);
            printf("%s\n",user[i].email);
            printf("%d",user[i].number);
    }
}

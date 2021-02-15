#include<stdio.h>
int main()
{
    struct user
{
    char name[30];
    char emale[40];
    char number[15];
};
    struct user user1;

    gets(user1.name);
    gets(user1.emale);
    scanf("%s",&user1.number);

    puts(user1.name);
    puts(user1.emale);
    printf("%s",user1.number);
}

#include<stdio.h>
struct student
{
    int id;
    char name[30];
    int age;
    char department[50];
    int batch;
    int phone;
};
int main()
{
    struct student s;
    printf("Enter ID: ");
    scanf("%d",&s.id);
    printf("\nEnter Name: ");
    fflush(stdin);
    gets(s.name);
    printf("\nEnter Age: ");
    scanf("%d",&s.age);
    printf("\nEnter Department: ");
    fflush(stdin);
    gets(s.department);
    printf("\nEnter Batch: ");
    scanf("%d",&s.batch);
    printf("\nEnter Phone: ");
    scanf("%d",&s.phone);

    printf("\nID: %d\n",s.id);
    printf("Name: %s\n",s.name);
    printf("Age: %d\n",s.age);
    printf("Department: %s\n",s.department);
    printf("Batch: %d\n",s.batch);
    printf("Phone: %d",s.phone);


}

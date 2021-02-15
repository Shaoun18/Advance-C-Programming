#include<stdio.h>
int main()
{
    FILE *file;
    char name[80];
    int age,phone,number,i;
    file=fopen("d:\\student.txt","w");
    if(file==NULL)
    {
        printf("File does not exist");
        exit(1);
    }
    else
    {
        printf("file is opened\n");
        printf("Enter number of students:");
        scanf("%d",&number);
        for(i=1;i<=number;i++)
        {
            printf("Enter Student name:");
            scanf("%s",&name);
            printf("Enter student age:");
            scanf("%d",&age);
            printf("Enter student phone number:");
            scanf("%d",&phone);
            fprintf(file,"%s\t\t%d\t%d\n",name,age,phone);
        }
        fclose(file);
    }
    getch();
}

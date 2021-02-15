#include<stdio.h>
struct student
{
    char name[20];
    int id;
    char address[15];
    char gender[10];
    char subject[20];
    float number;
    int code;
} s[100];

void add(int *m);
void pre();
void all(int m);
void search(int m);
void id(int m);
void name(int m);
void modify(int m);
void result();
void result_view();

void main()
{
    int x,n=0,m;
    while(1){
    printf("\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t=============== Student Information System ===============\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t1. CREATE STUDENT RECORD\n\n");
    printf("\t\t\t\t\t\t\t\t2. DISPLAY ALL STUDENT RECORD\n\n");
    printf("\t\t\t\t\t\t\t\t3. SEARCH STUDENT RECORD\n\n");
    printf("\t\t\t\t\t\t\t\t4. MODIFY STUDENT RECORD\n\n");
    printf("\t\t\t\t\t\t\t\t5. STUDENT RESULT\n\n");
    printf("\t\t\t\t\t\t\t\t6. EXIT\n\n\n");
    printf("\t\t\t\t\t\t\t\tPlease Enter Your Choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1 : add(&m);
        break;
        case 2 :    printf("\n\n");
                    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
                    printf("\t\t\t\t\t\t================= Display Students Record ================\n");
                    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
                    printf("\n\n");
                    printf("\t\t\t\t\t\t\t\t1. PRE DEFINE STUDENT RECORD\n\n");
                    printf("\t\t\t\t\t\t\t\t2. USER DEFINE STUDENT RECORD\n\n");
                    int y;
                    printf("\t\t\t\t\t\t\t\tPlease Enter Your Choice: ");
                    scanf("%d",&y);
                    switch(y)
                    {
                        case 1: pre();
                        break;
                        case 2: all(m);
                        break;
                        default: printf("\n\t\t\t\t\t\t\t\tWrong Input.\n\n");
                    }
        break;
        case 3 : search(m);
        break;
        case 4 : modify(m);
        break;
        case 5 :    printf("\n\n");
                    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
                    printf("\t\t\t\t\t\t===================== Student Result =====================\n");
                    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t1.RESULT ENTRY\n");
                    printf("\n\t\t\t\t\t\t\t\t2.RESULT VIEW\n\n");
                    int z;
                    printf("\n\t\t\t\t\t\t\t\tPlease Enter Your Choice: ");
                    scanf("%d",&z);
                    switch(z)
                    {
                        case 1: result();
                        break;
                        case 2: result_view();
                        break;
                        default: printf("\n\t\t\t\t\t\t\t\tWrong Input.\n\n");
                    }
        break;
        case 6 : n++;
        break;
        default: printf("\n\t\t\t\t\t\t\t\tWrong Input.\n\n");
    }
    if(n==1)
    {
        break;
    }
}
}


void add(int *m)
{
    int i,n;
    i=0;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t================== Entry Students Record =================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\tEnter The Total Number of Student: ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("\n\n\t\t\t\t\t\tEnter The Id Number of Student: ");
        scanf("%d",&s[i].id);
        printf("\n\t\t\t\t\t\tEnter The Name of Student: ");
        scanf("%s",&s[i].name);
        printf("\n\t\t\t\t\t\tEnter The Gender of Student: ");
        scanf("%s",&s[i].gender);
        printf("\n\t\t\t\t\t\tEnter The Address of Student: ");
        scanf("%s",&s[i].address);
        i++;
    }
    *m=n;
}

void pre()
{
    int i;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t=================== All Student Record ===================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n");
    printf("\t\t\t\t\t\tId\t\tName\t\tGender\t\tAddress\n");
    printf("\t\t\t\t\t\t--\t\t----\t\t------\t\t-------\n\n");

        printf("\t\t\t\t\t\t743\t\t");
        printf("AFJAL\t\t");
        printf("Male\t\t");
        printf("Basabo\n\n");
        printf("\t\t\t\t\t\t752\t\t");
        printf("DARUS\t\t");
        printf("Male\t\t");
        printf("Motijhil\n\n");
        printf("\t\t\t\t\t\t754\t\t");
        printf("ONONNA\t\t");
        printf("Female\t\t");
        printf("Khilgaon\n\n");
        printf("\t\t\t\t\t\t804\t\t");
        printf("MOMINUL\t\t");
        printf("Male\t\t");
        printf("Mohammadpur\n\n");
}


void all(int n)
{
    int i;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t=================== All Student Record ===================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n");
    printf("\t\t\t\t\t\tId\t\tName\t\tGender\t\tAddress\n");
    printf("\t\t\t\t\t\t--\t\t----\t\t------\t\t-------\n\n");
    for(i=0;i<n;i++)
    {
        printf("\t\t\t\t\t\t%d\t\t",s[i].id);
        printf("%s\t\t",s[i].name);
        printf("%s\t\t",s[i].gender);
        printf("%s\n\n",s[i].address);
    }
}


void search(int m)
{
    int x;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t================== Search Student Record =================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\t\t\t\t1. Search By Id");
    printf("\n\n\t\t\t\t\t\t\t\t2. Search By Name\n");
    printf("\n\n\t\t\t\t\t\t\t\tEnter Your Choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1 : id(m);
        break;
        case 2 : name(m);
        break;
        default: printf("\n\t\t\t\t\t\t\t\tWrong Input.\n\n");
    }
}


void id(int m)
{
    int i,x,y=0;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t===================== Student Record =====================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\t\t\tEnter Student Id: ");
    scanf("%d",&x);
    printf("\n");
    for(i=0;i<m;i++)
    {
        if(s[i].id==x)
        {
            y++;
            printf("\t\t\t\t\t\t\tName: %s\n\n",s[i].name);
            printf("\t\t\t\t\t\t\tGender: %s\n\n",s[i].gender);
            printf("\t\t\t\t\t\t\tAddress: %s\n\n",s[i].address);
            break;
        }
    }
    if(y==0)
    {
        printf("\t\t\t\t\t\t\tThis Id Not Found\n\n");
    }
}


void name(int m)
{
    int i,j,k=0;
    char name[20];
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t===================== Student Record =====================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\t\t\tEnter Student Name: ");
    scanf("%s",name);
    for(i=0;i<m;i++)
    {
        j=strcmp(name,s[i].name);
        if(j==0)
        {
            k++;
            printf("\n\t\t\t\t\t\t\tId: %d\n\n",s[i].id);
            printf("\t\t\t\t\t\t\tName: %s\n\n",s[i].name);
            printf("\t\t\t\t\t\t\tGender: %s\n\n",s[i].gender);
            printf("\t\t\t\t\t\t\tAddress: %s\n\n",s[i].address);
        }
    }
    if(k==0)
    {
        printf("\n\t\t\t\t\t\t\tThis Name Not Found\n\n");
    }
}

void modify(int m)
{
    int i,j,k=0;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t================== Modify Student Record =================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\t\t\tEnter Student Id: ");
    scanf("%d",&j);
    for(i=0;i<m;i++)
    {
        if(s[i].id==j)
        {
            k++;
            printf("\n\t\t\t\t\t\tEnter The Name of Student: ");
            scanf("%s",&s[i].name);
            printf("\n\t\t\t\t\t\tEnter The Gender of Student: ");
            scanf("%s",&s[i].gender);
            printf("\n\t\t\t\t\t\tEnter The Address of Student: ");
            scanf("%s",&s[i].address);
        }
    }
    if(k==0)
    {
        printf("\n\t\t\t\t\t\t\tThis Id Not Found\n\n");
    }
}


void result()
{
    int i,j,k,m,l;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t====================== Result Entry ======================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    FILE *file;
    if ((file=fopen("E:\\program.txt","w"))==NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
        printf("\n\t\t\t\t\t\t\tEnter Student Id: ");
        scanf("%d",&s[1].id);
        fprintf(file,"%d\n",s[1].id);
        printf("\n\n\t\t\t\t\t\tEnter The Total Number Of Subject: ");
        scanf("%d",&j);
        fprintf(file,"%d\n",j);
        for(l=0;l<j;l++)
        {
            printf("\n\n\t\t\t\t\t\tEnter Subject-%d Name: ",l+1);
            scanf("%s",&s[l].subject);
            fprintf(file,"%s\n",s[l].subject);
            printf("\n\t\t\t\t\t\tEnter Subject-%d Number: ",l+1);
            scanf("%f",&s[l].number);
            fprintf(file,"%.f\n",s[l].number);
        }
        fclose(file);
}


void result_view()
{
    int l,j;
    float total=0,cgpa;
    printf("\n\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    printf("\t\t\t\t\t\t========================= Result =========================\n");
    printf("\t\t\t\t\t\t----------------------------------------------------------\n");
    FILE *file;
    if ((file=fopen("E:\\program.txt","r"))==NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fscanf(file,"%d",&s[1].id);
    printf("\n\t\t\t\t\t\t\t\t\tStudent Id: %d\n",s[1].id);
    printf("\n\n");
    fscanf(file,"%d",&j);
    printf("\t\t\t\t\t\tSubject Name\t\tMark\t\tGrade\t\t\tPoint\n");
    printf("\t\t\t\t\t\t------------\t\t----\t\t-----\t\t\t-----\n\n");
    l=0;
    while(l<j)
        {
            fscanf(file,"%s",s[l].subject);
            printf("\t\t\t\t\t\t%s",s[l].subject);
            fscanf(file,"%f",&s[l].number);
            printf("\t\t\t%.1f",s[l].number);
            if(s[l].number>79 &&s[l].number<101)
            {
                printf("\t\tA+   ");
                printf("\t\t4.00\n");
                total=total+4.00;
            }
            else if(s[l].number>74 &&s[l].number<80)
            {
                printf("\t\tA");
                printf("\t\t3.75\n");
                total=total+3.75;
            }
            else if(s[l].number>69 &&s[l].number<75)
            {
                printf("\t\tA-");
                printf("\t\t3.50\n");
                total=total+3.50;
            }
            else if(s[l].number>64 &&s[l].number<70)
            {
                printf("\t\tB+");
                printf("\t\t3.25\n");
                total=total+3.25;
            }
            else if(s[l].number>59 &&s[l].number<65)
            {
                printf("\t\tB\n");
                printf("\t\t3.00\n");
                total=total+3.00;
            }
            else if(s[l].number>54 &&s[l].number<60)
            {
                printf("\t\tB-");
                printf("\t\t2.75\n");
                total=total+2.75;
            }
            else if(s[l].number>49 &&s[l].number<55)
            {
                printf("\t\tC+");
                printf("\t\t2.50\n");
                total=total+2.50;
            }
            else if(s[l].number>44 &&s[l].number<50)
            {
                printf("\t\tC");
                printf("\t\t2.25\n");
                total=total+2.25;
            }
            else if(s[l].number>39 &&s[l].number<45)
            {
                printf("\t\tD");
                printf("\t\t2.00\n");
                total=total+2.00;
            }
            else
            {
                printf("\t\tF");
                printf("\t\t0.00\n");
                total=total+0.00;
            }
            printf("\n");
            l++;
        }
        fclose(file);
        printf("\n\t\t\t\t\t\t\t\tStudent CGPA=%.2f\n\n",total/j);
}

#include<stdio.h>
void home();
void flight();
void booking(fl);
void cancellation();
void precords();
void plist();
void settings();
void password();
void booking();
void adminmode();
void admin();
void shedule();
int main()
{
    printf("\t\t\t\t\t\t=============================================================\n");
    printf("\t\t\t\t\t\t||                 AIRLINE TICKET MANAGEMENT               ||\n");
    printf("\t\t\t\t\t\t=============================================================\n");
    home();


    getch();
}
void home()
{
    int casenum;

    printf("-------------\n");
    printf("| Main MENU |\n");
    printf("-------------\n\n");
    printf("1 : Reservation\n");
    printf("2 : CANCELLATION\n");
    printf("3 : PASSENGERS RECORDS\n");
    printf("4 : PASSENGERS LIST\n");
    printf("5 : Admin Mode\n");
    printf("6 : Settings\n");
    printf("7 : QUIT\n\n");
    printf("------------------\n");
    printf("| Enter > Choice |\n");
    printf("------------------\n");
    scanf("%d",&casenum);

    switch(casenum)
    {
        case 1:
            flight();
            break;
        case 2:
            cancellation();
            break;
        case 3:
            precords();
            break;
        case 4:
            plist();
            break;
        case 5:
            adminmode();
            break;
        case 6:
            settings();
            break;
        case 7:
            quit();
            break;
        default :
            printf("Please Enter Valid Choise. Thank You");

    }
}
void admin()
{
    printf("\n----------\t--------------------------------\t---------------------------\n");
    printf("|0 > Menu|\t|1 > Change Username & Password|\t|2 > Change Flight Shedule|\n");
    printf("----------\t--------------------------------\t---------------------------\n");
    int c;
    scanf("%d",&c);
    if(c==0)
        home();
    else if(c==1)
            password();
    else if(c==2)
        flight();
}
void flight()
{
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ List Of The Flights ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("SNO\tFlight No\tFrom\t\tTo\t\tEconomic Class\t\tBusiness Class\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("1\tBD6051\t\tDhaka\t\tChittagong\t5000 TK\t\t\t8000 TK\n");
    printf("2\tBD6052\t\tDhaka\t\tCoxs Bazar\t5000 TK\t\t\t8000 TK\n");
    printf("3\tBD6053\t\tDhaka\t\tCaulcutta\t5000 TK\t\t\t12000 TK\n");
    printf("4\tBD6054\t\tDhaka\t\tQatar\t\t9000 TK\t\t\t15000 TK\n");
    printf("5\tBD6055\t\tDhaka\t\tCalifornia\t20000 TK\t\t39000 TK\n");
    printf("6\tBD6056\t\tDhaka\t\tToranto\t\t15000 TK\t\t35000 TK\n");
    printf("7\tBD6057\t\tDhaka\t\tNew Yourk\t18000 TK\t\t37000 TK\n");
    printf("8\tBD6058\t\tDhaka\t\tDelhi\t\t5000 TK\t\t\t20000 TK\n");
    printf("9\tBD6059\t\tDhaka\t\tMumbai\t\t5000 TK\t\t\t14000 TK\n");
    printf("10\tBD6060\t\tDhaka\t\tBeijing\t\t9000 TK\t\t\t180000 TK\n");
    printf("11\tBD6061\t\tDhaka\t\tDubai\t\t12000 TK\t\t25000 TK\n");
    printf("12\tBD6062\t\tDhaka\t\tRiyadh\t\t8000 TK\t\t\t20000 TK\n");

    printf("\n-----------------\t------------\t------------------\n");
    printf("| SNO > Booking |\t| 0 > Menu |\t| Any Key > Exit |");
    printf("\n-----------------\t------------\t------------------\n");
    int c;

    scanf("%d",&c);
    int fl;
    fl=c+50;
    if(c>=1 && c<=12)
        booking(fl);
    else if(c==0)
        home();
    else
        quit();

}
void booking(int fl) //For booking Tickets and reservations
{
struct booking
{
    char name[12],address[10];
    int age;
    char passport[6];
};

    struct booking list[100];
    int i,many;
    printf("\n----------------------\n");
    printf("| Number of Tickets: |");
    printf("\n----------------------\n");
    scanf("%d",&many);

    for(i=0;i<many;i++)
    {
        printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1\t\t\t\t\t\t\t\t\t~ Enter Information For Ticket %d~",i+1);
        printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        fflush(stdin);
        printf("Name: ");
        gets(list[i].name);
        printf("Passport Number: ");
        scanf("%s",&list[i].passport);
        printf("Address: ");
        fflush(stdin);
        gets(list[i].address);
        printf("Age: ");
        scanf("%d",&list[i].age);

    }

    for(i=0;i<many;i++)
    {
    //Initializing File for Passenger List
    FILE *plist;
    plist=fopen("d:\\project\\plist.txt", "a");
    if(plist==NULL)
        {
            printf("Error");
            exit(1);
        }
    else
        fprintf(plist,"%d : %s\n",i+1,list[i].name);
        fclose(plist);
    //Initializing File for Passengers Records

    }
    printf("\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t~ Congratulations Your Ticket Is Ready ~\n");
    printf("\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for(i=0;i<many;i++)
    {
        printf("............\n");
        printf("| Ticket %d |\n",i+1);
        printf("............\n");
        printf("\n\n");
        printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~AIRLINE BOOKING TICKET~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\t\t\t\t\t\t|----------------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t| Booking ID : %d\t\t\tFlight No : BD60%d\n",i+1,fl);
        printf("\t\t\t\t\t\t| Name       : %s\t\t\tAddress   : %s\n",list[i].name,list[i].address);
        printf("\t\t\t\t\t\t| Passport NO: %s\t\t\tAge       : %d\n",list[i].passport,list[i].age);
        printf("\t\t\t\t\t\t| Seats NO   : %d\t\t\tPaid      : 10000 TK\n",i+100);
        printf("\t\t\t\t\t\t|----------------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~Thank You For Using Our Service~~~~~~~~~~~~~~~~~~~\n\n");
    }
    int d;
    printf("\n---------------\t\t------------\t\t------------------");
    printf("\n| 1 > Booking |\t\t| 0 > Menu |\t\t| Any Key > Exitt|");
    printf("\n---------------\t\t------------\t\t------------------\n\n");

    scanf("%d",&d);
    if(d==1)
        booking(fl);
    else if(d==0)
        home();
    else
        quit();
}
void cancellation()
{
    printf("Function Is Under Construction\n\n");
    home();
}
void precords()
{
    printf("\t\t\t\t\t\t\t\t\tPassengers Records\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~");
    //Initializing File for Passenger List
    char records[2000];
    FILE *precords;
    precords=fopen("d:\\project\\precords.txt", "r");
    if(precords==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
        fgets(records,1000,precords);
        fclose(precords);
    puts(records);


}
void plist()
{
    char name[2000];
    FILE *plist;
    plist=fopen("d:\\project\\plist.txt", "a");
    if(plist==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
        fgets(name,20,plist);
        fclose(plist);
    puts(name);

}

void adminmode()
{
    printf("\n\t\t\t\t\t\t\t\t\tYOU MUST LOG IN FIRST\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n");
    char name[20],namecheck[10];
    int pass1,pass;
    printf("Enter Username:");
    fflush(stdin);
    gets(name);
    printf("\nEnter Password:");
    scanf("%d",&pass1);
    int c;

    FILE *username;
    username=fopen("d:\\project\\username.txt", "r");
    if(username==NULL)
    {
        printf("Error! File Missing!");
        exit(1);
    }
    else
        fgets(namecheck,7,username);
        fclose(username);

    FILE *password1;
    password1=fopen("d:\\project\\password.txt", "r");
    if(password1==NULL)
    {
        printf("Error! File Missing!");
        exit(1);
    }
    else
        fscanf(password1,"%d",&pass);
        fclose(password1);

    int s=strcmp(name,namecheck);

    if(s==0 && pass1==pass)
        admin();
    else
        printf("Wrong Username & Password.\n\n\n");
        home();
}
void password() //for changing password
{
    char name2[10];
    int pass;
    printf("\t\t\t\t\t\t\t\tSecurity System\n");
    printf("\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~\n");

    FILE *username;
    username=fopen("d:\\project\\username.txt", "w");
    if(username==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
        printf("Enter New Username:");
        fflush(stdin);
        gets(name2);
        fputs(name2,username);
        printf("\nSuccesfull\n\n");
        fclose(username);

    FILE *password1;
    password1=fopen("d:\\project\\password.txt", "w");
    if(password1==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
        printf("Enter New Password:");
        fflush(stdin);
        scanf("%d",&pass);
        fprintf(password1,"%d",pass);
        printf("\nSuccesfull\n\n");
        fclose(password1);

    printf("------------\n");
    printf("| 0 > Menu |\n");
    printf("------------\n");

    int a;
    scanf("%d",&a);
    if(a==0)
        home();
}
void settings()
{
    printf("Function is under construction");
}
void quit()
{
    printf("\a\t\t\t\t\t\t\t\t**********************************\n");
    printf("\t\t\t\t\t\t\t\t* THANK YOU FOR USING THE SYSTEM *\n");
    printf("\t\t\t\t\t\t\t\t**********************************\n");
    exit(0);
}


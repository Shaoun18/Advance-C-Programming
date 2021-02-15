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
void login();
void admin();
void flightschedule();
void flightmode();
void quit();
void header();
void forgotpassword();
int main()
{
    system("cls");
    header();
    printf("\n\n\n\n\t\t\t\t\t\t\t----------------\t-----------------------\n");
    printf("\t\t\t\t\t\t\t| 0 > Book Now |\t| 1 > Flight Schedule |\n");
    printf("\t\t\t\t\t\t\t----------------\t-----------------------\n\n\n\n\n");
    printf("\t\t\t\t\t\t---------------\t    ------------------------\t--------------\n");
    printf("\t\t\t\t\t\t| 2 > Sign In |\t    | 3 > Forgoot Password |\t| Any > Exit |\n");
    printf("\t\t\t\t\t\t---------------\t    ------------------------\t--------------\n");


    int a;
    scanf("%d",&a);
    if(a==0)
        booking();
    else if(a==1)
        flightschedule(1);
    else if(a==2)
        login();
    else if(a==3)
        forgotpassword();
    else if(a==syspass())
        home();
    else
        printf("Invalid Choice\n");
    getch();
}
void header()
{
    printf(" \t\t\t\t\t\t=============================================================\n");
    printf(" \t\t\t\t\t\t||                 AIRLINE TICKET MANAGEMENT               ||\n");
    printf(" \t\t\t\t\t\t=============================================================\n\n");
}
void home()
{
    system("cls");
    header();
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
            admin();
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
    system("cls");
    header();
    printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ Admin Mode ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n");

    printf("1 : Change Flight Shedule\n");
    printf("2 : Cancel Tickets\n\n");
    printf("\n-----------\n");
    printf("|0 > Menu |\n");
    printf("-----------\n\n");
    int c;
    scanf("%d",&c);
    if(c==0)
        home();
    else if(c==1)
        flightmode();
}
void flight()
{
    flightschedule();

    printf("\n-----------------\t------------------\n");
    printf("| SNO > Booking |\t| Any Key > Exit |");
    printf("\n-----------------\t------------------\n");
    int c;

    scanf("%d",&c);
    int fl;
    fl=c+50;
    if(c>=1 && c<=12)
        booking(fl);
    else if(c==0)

        quit();

}
void booking(int fl) //For booking Tickets and reservations
{
    system("cls");
    header();
    flightschedule();
    struct booking
    {
    char name[12],address[10];
    int age;
    char passport[6];
    };

    struct booking list[100];
    int i,j,many;
    printf("\n----------------------\n");
    printf("| Number of Tickets: |");
    printf("\n----------------------\n");
    scanf("%d",&many);

    ///reading booking id from ticket counter file;
    FILE *bookingid;
    bookingid=fopen("d:\\project\\ticketcounter.txt", "r");
    fscanf(bookingid,"%d",&j);
    fclose(bookingid);

    for(i=0;i<many;i++)
    {
        printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\t\t\t\t\t\t\t\t\t~ Enter Information For Ticket %d ~",i+1);
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
        fprintf(plist,"%d : %s\n",j=j+i,list[i].name);
        fclose(plist);
    //Initializing File for Passenger Records
    FILE *precords;
    precords=fopen("d:\\project\\precords.txt", "a");
    if(precords==NULL)
        {
            printf("Error");
            exit(1);
        }
    else
    {
        fprintf(precords,"~~~~~~~~~~~~~~~~~~~\n");
        fprintf(precords,"~ Booking ID : %d ~\n",j);
        fprintf(precords,"~~~~~~~~~~~~~~~~~~~\n");
        fprintf(precords,"Flight No : BD60%d\n",fl);
        fprintf(precords,"Name       : %s\n",list[i].name);
        fprintf(precords,"Address   : %s\n",list[i].address);
        fprintf(precords,"Passport NO: %s\n",list[i].passport);
        fprintf(precords,"Age       : %d\n",list[i].age);
        fprintf(precords,"Seats NO   : %d\n",i+100);
        fprintf(precords,"Paid      : 10000 TK\n");
        fclose(precords);
    }
    }
    printf("\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t~ Congratulations Your Ticket Is Ready ~\n");
    printf("\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    j=j-many;
    for(i=0;i<many;i++)
    {
        printf("............\n");
        printf("| Ticket %d |\n",i+1);
        printf("............\n");
        printf("\n\n");
        printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~AIRLINE BOOKING TICKET~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\t\t\t\t\t\t|----------------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t| Booking ID : %d\t\t\tFlight No : BD60%d\n",j=j+i,fl);
        printf("\t\t\t\t\t\t| Name       : %s\t\t\tAddress   : %s\n",list[i].name,list[i].address);
        printf("\t\t\t\t\t\t| Passport NO: %s\t\t\tAge       : %d\n",list[i].passport,list[i].age);
        printf("\t\t\t\t\t\t| Seats NO   : A%d\t\t\tPaid     : 10000 TK\n",i);
        printf("\t\t\t\t\t\t|----------------------------------------------------------------|\n");
        printf("\t\t\t\t\t\t~~~~~~~~~~~~~~~~Thank You For Using Our Service~~~~~~~~~~~~~~~~~~~\n\n");
    }
    FILE *bookingid1;
    bookingid1=fopen("d:\\project\\ticketcounter.txt", "w");
    fprintf(bookingid1,"%d",j);

    int d;
    printf("\n---------------\t\t------------\t\t------------------");
    printf("\n| 1 > Booking |\t\t| 0 > Back |\t\t| Any Key > Exitt|");
    printf("\n---------------\t\t------------\t\t------------------\n\n");

    scanf("%d",&d);
    if(d==1)
        booking(fl);
    else if(d==0)
        main();
    else
        quit();
}
void cancellation()
{
    system("cls");
    header();
    printf("Function Is Under Construction\n\n");
    home();
}
void precords()
{
    system("cls");
    header();
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ Passengers Records ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n\n");
    char records[2000];

    FILE *precords;
    precords=fopen("d:\\project\\precords.txt", "r");
    if(precords==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
    {
        while(!feof(precords))
        {
        fgets(records,200,precords);
        puts(records);
        }
        fclose(precords);
    }

    int d;
    printf("\n------------\t\t------------------");
    printf("\n| 0 > Menu |\t\t| Any Key > Exit |");
    printf("\n------------\t\t------------------\n");

    scanf("%d",&d);
    if(d==0)
        home();

    else
        quit();

}
void plist()
{
    system("cls");
    header();
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ List Of Passengers ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n\n");

    char name[2000];

    FILE *plist;
    plist=fopen("d:\\project\\plist.txt", "r");
    if(plist==NULL)
    {
        printf("Error");
        exit(1);
    }
    else
    {
        while(!feof(plist))
        {
        fgets(name,200,plist);
        puts(name);
        }
        fclose(plist);
    }
int d;
    printf("\n------------\t\t------------------");
    printf("\n| 0 > Menu |\t\t| Any Key > Exit |");
    printf("\n------------\t\t------------------\n");

    scanf("%d",&d);
    if(d==0)
        home();

    else
        quit();
}

void login()
{
    system("cls");
    header();
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

    if(pass1==pass)
        home();
    else
        printf("\n\nWrong Username & Password.\n\n\n");
}
void password() //for changing password
{
    system("cls");
    header();
    header();
    system("cls");
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
int syspass()
{
    //Password For System Manager
    int system=805,b,temp;
    temp=system;
    return b=temp+806;
}
void settings()
{
    system("cls");
    header();
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ Settings ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~\n\n");

    printf("1 : Edit Passenger Records\n");
    printf("2 : Edit List\n");
    printf("3 : Change User Name & Password\n\n");
    printf("------------\n");
    printf("| 0 > Home |\n");
    printf("------------\n");

    int a;
    scanf("%d",&a);
    if(a==1)
        system("d:\\project\\precords.txt");
    else if(a==2)
        system("d:\\project\\plist.txt");

    else if(a==3)
        password();
    else if(a==0)
        home();
}
void flightmode ()
{
    system("cls");
    header();
    system("cls");
    printf("Function is under construction");

}
void forgotpassword()
{
    system("cls");
    header();
    char name[20];
    char name1[20];
    int pass;
    FILE *password1;
        password1=fopen("d:\\project\\password.txt", "r");
        fscanf(password1,"%d",&pass);
        fclose(password1);

    printf("Enter Your Username For Recover Your Password: ");
    fflush(stdin);
    gets(name1);


    FILE *username;
    username=fopen("d:\\project\\username.txt", "r");
        fgets(name,20,username);
        fclose(username);

    int s=strcmp(name,name);
    if(s==0)
    {
        printf("\nYour password is: %d\n",pass);
    }
    else
    {
        printf("Wrong Username\n");
    }

    printf("------------\n");
    printf("| 0 > Back |\n");
    printf("------------\n");

    int a;
    scanf("%d",&a);
    if(a==0)
        login();


}
 void flightschedule(int c)
{
    system("cls");
    header();
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t~ List Of The Flights ~\n");
    printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("SNO\tFlight No\tFrom\t\tTo\t\tEconomic Class\t\tBusiness Class\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("1\tBD6051\t\tDhaka\t\tChittagong\t5000 TK\t\t\t10000 TK\n");
    printf("2\tBD6052\t\tDhaka\t\tSingapoor\t5000 TK\t\t\t10000 TK\n");
    printf("3\tBD6053\t\tDhaka\t\tKolkata\t\t5000 TK\t\t\t12000 TK\n");
    printf("4\tBD6054\t\tDhaka\t\tQatar\t\t9000 TK\t\t\t15000 TK\n");
    printf("5\tBD6055\t\tDhaka\t\tCalifornia\t20000 TK\t\t39000 TK\n");
    printf("6\tBD6056\t\tDhaka\t\tToranto\t\t15000 TK\t\t35000 TK\n");
    printf("7\tBD6057\t\tDhaka\t\tNew Yourk\t18000 TK\t\t37000 TK\n");
    printf("8\tBD6058\t\tDhaka\t\tDelhi\t\t5000 TK\t\t\t20000 TK\n");
    printf("9\tBD6059\t\tDhaka\t\tMumbai\t\t5000 TK\t\t\t14000 TK\n");
    printf("10\tBD6060\t\tDhaka\t\tBeijing\t\t9000 TK\t\t\t180000 TK\n");
    printf("11\tBD6061\t\tDhaka\t\tDubai\t\t12000 TK\t\t25000 TK\n");
    printf("12\tBD6062\t\tDhaka\t\tRiyadh\t\t8000 TK\t\t\t20000 TK\n");
    if(c==1)
    {
        printf("------------\n");
        printf("| 0 > Back |\n");
        printf("------------\n");

        int d;
        scanf("%d",&d);

        if(d==0)
            main();
    }

}
void quit()
{
    system("cls");
    printf("\a\t\t\t\t\t\t\t\t**********************************\n");
    printf("\t\t\t\t\t\t\t\t* THANK YOU FOR USING THE SYSTEM *\n");
    printf("\t\t\t\t\t\t\t\t**********************************\n");
    exit(0);
}




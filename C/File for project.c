 #include<stdio.h>
 int main()
 {
    char a,str[2000],name[10];
    int i=0;
    FILE *check;
    check=fopen("d:\\project\\plist.txt", "r+");

    while((a=fgetc(check))!=EOF)
    {
        str[i]=a;
        i++;
    }
    str[i]='\0';
        //fclose(check);

    printf("\nEnter Booking ID: \n");
    gets(name);

    int len=strlen(name);
    for(len;len<9;len++)
    {
        name[len]=' ';
    }
    name[len]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==name[0] && str[i+1]==name[1] && str[i+2]==name[2] && str[i+3]==name[3] && str[i+4]==name[4] && str[i+5]==name[5] && str[i+6]==name[6] && str[i+7]==name[7] && str[i+8]==name[8])
        {
            str[i]='C';
            str[i+1]='a';
            str[i+2]='n';
            str[i+3]='c';
            str[i+4]='e';
            str[i+5]='l';
            str[i+6]='l';
            str[i+7]='e';
            str[i+8]='d';
        }
    }
    //FILE *cancel;
    //cancel=fopen("d:\\project\\precords.txt", "w+");
    fprintf(check,"%s",str);
    fclose(check);
    printf("Succesfully Canceled");
 }


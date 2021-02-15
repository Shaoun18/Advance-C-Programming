#include<stdio.h>
struct add
{
    int class[3];
    char flight[10],from[10],to[15],air[20],time[10];
};
int main()
{
    char str[20000],c;
    int i=0,line=0,sn,size=0,index=0;
    struct add n;

    FILE *cpy;
    cpy=fopen("d:\\project\\flight1.txt", "r");
    while((c=fgetc(cpy)) != EOF)
    {
        str[i]=c;
        i++;
    }
    str[i]='\0';
    fclose(cpy);
    printf("Enter SNO Number:");
    scanf("%d",&sn);
    sn=sn-1;

    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]=='\n')
       {
            line++;
            if(line==sn)
            {
                index=i;
            }
       }
    }
    for(i=index+1;str[i]!='\n';i++)
    {
        size++;
    }
    printf("Enter Flight NO:");
    fflush(stdin);
    gets(n.flight);
    printf("Enter From:");
    gets(n.from);
    printf("Enter To:");
    gets(n.to);
    printf("Enter E Class:");
    scanf("%d",&n.class[0]);
    printf("Enter B Class:");
    scanf("%d",&n.class[1]);
    printf("Enter F Class:");
    scanf("%d",&n.class[2]);
    printf("Enter Time:");
    fflush(stdin);
    gets(n.time);
    printf("Enter Airline:");
    gets(n.air);
    FILE *print;
    print=fopen("d:\\project\\flight1.txt", "w");
    fprintf(print,"%d\t%s\t\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%s\t%s\n",sn+1,n.flight,n.from,n.to,n.class[0],n.class[1],n.class[2],n.time,n.air);
    fclose(print);
    char str1[300],d;
    FILE *cpy1;
    i=0;
    cpy1=fopen("d:\\project\\flight1.txt", "r");
    while((d=fgetc(cpy1)) != EOF)
    {
        str1[i]=d;
        i++;
    }
    str1[i]='\0';
    fclose(cpy1);
    int j=0;
    for(i=index+1;str1[j]!='\0';i++)
    {
        str[i]=str1[j];
        j++;
    }
    FILE *print1;
    print1=fopen("d:\\project\\flight1.txt","w");
    fprintf(print1,"%s",str);
    fclose(print1);
}

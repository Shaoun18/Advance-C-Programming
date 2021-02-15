#include<stdio.h>
char choice;
int main()
{
    char a,b[20000],s[1000];
    int i=0,c=1,d=0,x,j;
    FILE *copy;
    copy=fopen("d:\\project\\flight.txt", "r");
    while((a=fgetc(copy))!=EOF)
    {
        b[i]=a;
        i++;
    }
    b[i]='\0';
    int fl;
    printf("enter line");
    scanf("%d",&fl);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='\n')
        {
            c++;
            if(c==fl)
            {
                d=i;
            }
        }
    }
    for(i=d+1,j=0;b[i]!='\n';i++,j++)
    {
        s[j]=b[i];
    }
    s[j]='\0';

    int m=0,k=0;
    char bill[200];
    int clas;
    printf("-------------------------------------------\n");
    printf("| 1 > E Class | 2 > B Class | 3 > F Class |\n");
    printf("-------------------------------------------\n");
    choice=getche();
    if(choice=='1')
        clas=14;
    else if(choice=='2')
        clas=9;
    else if(choice=='3')
        clas=11;

    int ec=7,bc=9,fc=11;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='\t')
        {
            m++;
            if(m==clas)
                k=i;
        }
    }

    for(i=k+1,j=0;s[i]!='\t';i++,j++)
    {
        bill[j]=s[i];
    }
    bill[j]='\0';
    puts(bill);
}

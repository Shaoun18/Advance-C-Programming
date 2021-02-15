#include<stdio.h>
int main()
{
    char ch,str[100];
    int i,vow,con,word,dig,other;
    gets(str);
    i=vow=con=word=dig=other=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vow++;
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            con++;
        else if(str[i]==' ')
            word++;
        else if(str[i]>='0' && str[i]<='9')
            dig++;
        else
            other++;
        i++;
    }
    word++;
    printf("Number of Vowel: %d\nNumber of Consonat: %d\nNumber of Word: %d\nNumber of Digit: %d\nNuber of Others: %d\n",vow,con,word,dig,other);

    getch();

}
/*while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vow++;
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            con++;
        else if(ch==' ')
            word++;
        else if(ch>='0' && ch<='9')
            dig++;
        else
            other++;
        i++;*/

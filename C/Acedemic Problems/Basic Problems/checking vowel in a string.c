#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    int i=0,vow=0,con=0,sp=0,dig=0;

    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vow++;
        else if(str[i]>'a' && str[i]<'z' || str[i]>'A' && str[i]<'Z')
            con++;
        else if(str[i]==' ')
            sp++;
        else if(str[i]>'0' && str[i]<'9')
            dig++;
        i++;
    }
    printf("Vowel: %d\n",vow);
    printf("Consonant: %d\n",con);
    printf("Space: %d\n",sp);
    printf("Digit: %d",dig);

}

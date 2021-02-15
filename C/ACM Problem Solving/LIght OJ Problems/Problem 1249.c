#include<stdio.h>
int main()
{
    int i,j,ca,ch;
    char name[20],name1[20],name2[20];
    scanf("%d",&ca);
    for(i=1;i<=ca;i++)
    {
        char name[30],name1[30],name2[30];
        int l,h,w,mul=0,mul1=0,mul2=10000000;
        scanf("%d",&ch);
        for(j=0;j<ch;j++)
        {
            scanf("%s %d %d %d",&name,&l,&w,&h);
            mul=l*w*h;

            if(mul< mul2)
            {
                mul2=mul;
                strcpy(name2,name);
            }

            if(mul>mul1)
            {
                mul1=mul;
                strcpy(name1,name);
            }
        }
        if(mul1==mul2)
            printf("Case %d: no thief\n",i);
        else
            printf("Case %d: %s took chocolate from %s\n",i,name1,name2);
    }
    return 0;
}

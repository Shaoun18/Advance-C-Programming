#include<stdio.h>
int main()
{
    char str[20];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        gets(str);
        strupr(str);
        printf("Case %d: %s\n",i,str);
    }
    return 0;
}

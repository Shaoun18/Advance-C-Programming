#include<stdio.h>
int sallary(int *n);
int main()
{
    int n;
    scanf("%d",&n);

    printf("Sallary is %d\n",sallary(&n));

}
int sallary(int *n)
{
    int basic,medi,rent,sallary;
    basic=*n/100;
    medi=basic*10;
    rent=basic*30;

    sallary=*n+medi+rent;

    return sallary;

}

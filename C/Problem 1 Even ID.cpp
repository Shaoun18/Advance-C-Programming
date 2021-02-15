#include<stdio.h>
int main ()
{
    int hardness,tensile;
    float carbon;
    printf("Enter Hardness: ");
    scanf("%d",&hardness);

    printf("Enter Carbon: ");
    scanf("%f",&carbon);

    printf("Enter Tensile Strength : ");
    scanf("%d",&tensile);

    if(hardness>60 && carbon<0.7 && tensile>50000)
        printf("Grade Is 10");
    else if(hardness>60 && carbon<0.7)
        printf("Grade is 9");
    else if(carbon<0.7 && tensile>50000)
        printf("Grade Is 8");
    else if(hardness>60 && tensile>5000)
        printf("Grade Is 7");
    else if(hardness>60 || carbon < 0.7 || tensile >50000)
        printf("Grade Is 6");

    else
        printf("Grade Is 5");
    return 0;
}

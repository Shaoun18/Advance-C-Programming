#include<stdio.h>
int main ()
{
    int choice;
    float cel,fah,result;
    printf("1.Celsius\n2.Fahrenheit\nEnter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            {
            printf("Enter Fahrenheit: ");
            scanf("%f",&fah);
            result=(fah-32)/1.8;
            printf("Celsius is %f",result);
            break;
            }
        case 2:
            {
            printf("Enter Celsius: ");
            scanf("%f",&cel);
            result=(cel*1.8)+32;
            printf("Fahrenheit is %f",result);
            break;
            }
        default:
            {
                printf("Incorrect Choice");
            }
    }
    return 0;
}

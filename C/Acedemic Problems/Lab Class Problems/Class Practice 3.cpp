#include<stdio.h>
int main ()
{
    int n;
    printf("Enter Day: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Sat");
        break;
    case 2:
        printf("Sun");
        break;
    case 3:
        printf("Mon");
        break;
    case 4:
        printf("Tue");
        break;
    case 5:
        printf("Wed");
        break;
    case 6:
        printf("THU");
        break;
    case 7:
        printf("FRI");
        break;
    default:
        printf("Wrong");
    }
    return 0;
}

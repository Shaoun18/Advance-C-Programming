#include<stdio.h>
int main ()
{
    int n,mark;
    printf("enter choice: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Enter mark: ");
        scanf("%d",&mark);

        if(mark=>80 && mark<=100)
            printf("A+");
        else
            printf("Wrong");

            break;
    case 2:
        printf("Enter mark: ");
        scanf("%d",&mark);

        if(mark=>70 && mark<=79)
            printf("A");
        else
            printf("Wrong");

            break;
    case 3:
        printf("Enter mark: ");
        scanf("%d",&mark);

        if(mark=>60 && mark<=69)
            printf("A-");
        else
            printf("Wrong");

            break;
    default:
        {
        printf("Wrong Choice");
        }
    }
    return 0;
}

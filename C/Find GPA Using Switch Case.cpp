#include<stdio.h>
int main ()
{
    int result,mark;
    printf("enter mark: ");
    scanf("%d",mark);
    result=mark/10;

    switch(result)
    {
        case 10:
        case 9:
        case 8:
        {
        printf("Result is A+");
        break;
        }
    case 7:
        {
        printf("Result is A");
        break;
        }
    case 6:
        {
        printf("Result is A-");
        break;
        }
    case 5:
        {
        printf("Result is B");
        break;
        }
    case 4:
        {
        printf("Result is C");
        break;
        }
    default:printf("Fail");
    }
    return 0;
}

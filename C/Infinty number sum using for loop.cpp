#include <stdio.h>
int main()
{
    int i,n;
    double number, sum = 0.0;
    printf("enter Limits: ");
    scanf("%d",&n);

    for(i=1; i <= n; i++)
    {
        printf("Enter a Number %d: ",i);
        scanf("%lf",&number);

        if(number < 0.0)
        {
            continue;
        }
         sum += number;
    }

    printf("Sum = %.2lf",sum);

    return 0;
}

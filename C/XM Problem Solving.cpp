#include<stdio.h>
int main()
{
    int mark1,mark2,avg;
    printf("Enter Mark 1: ");
    scanf("%d",&mark1);
    printf("Enter Marks 2:");
    scanf("%d",&mark2);

    if(mark1>=80 && mark1<=100)
        printf("Grade of Subject 1:A+\nGrade Point of Subject 1: 4.0");

        else if(mark1>=70)
            printf("\nGrade of Subject 1:A\nGrade Point of Subject 1: 3.5");

        else if(mark1>=60)
            printf("\nGrade of Subject 1:A-\nGrade Point of Subject 1: 3.0");

        else if(mark1>=50)
            printf("\nGrade of Subject 1:B\nGrade Point of Subject 1: 2.5");

        else if(mark1>=40)
            printf("\nGrade of Subject 1:C\nGrade Point of Subject 1: 2.0");

        else if(mark1<=39 && mark1>=0)
            printf("\nGrade of Subject 1:F\nGrade Point of Subject 1: 0.0");

    if(mark2>=80 && mark2<=100)
        printf("\nGrade of Subject 2:A+\nGrade Point of Subject 2: 4.0");

        else if(mark2>=70)
            printf("\nGrade of Subject 2:A\nGrade Point of Subject 2: 3.5");

        else if(mark2>=60)
            printf("\nGrade of Subject 2:A-\nGrade Point of Subject 2: 3.0");

        else if(mark2>=50)
            printf("\nGrade of Subject 2:B\nGrade Point of Subject 2: 2.5");

        else if(mark2>=40)
            printf("\nGrade of Subject 2:C\nGrade Point of Subject 2: 2.0");

        else if(mark2<=39 && mark2>=0)
            printf("\nGrade of Subject 1:F\nGrade Point of Subject 1: 0.0");


    avg=mark1+mark2/2;

    if(avg>40)
        printf("\nGood");
    else
        printf("\nAverage Result %d\n",avg);
    return 0;
}

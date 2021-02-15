#include<stdio.h>
int main ()
{
    int i,grade_number,grade;
    int failure=0,grade_total=0;
    float average;
    printf("Enter Number of grade:");
    scanf("%d",&grade_number);

    for(i=1;i<=grade_number;i++)
    {
        printf("Enter Grade %d: ",i);
        scanf("%d",&grade);
        grade_total=grade_total+grade;

        if(grade<65)
        failure++;
    }
    average=(float)grade_total/grade_number;

    printf("\nGrade average=%.4f\n",average);
    printf("Number Of Failure=%d",failure);

    return 0;
}


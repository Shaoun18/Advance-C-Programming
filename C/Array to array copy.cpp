#include<stdio.h>
int main ()
{
    int n;
    printf("Enter how many value you have: ");
    int i,array1[n],array2[100];

    printf("Array1 :");

    for(i=0;i<5;i++)
    {
        printf("\n%d",array1[i]);
    }
    for(i=0;i<5;i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray2: ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",array2[i]);
    }
    return 0;
}


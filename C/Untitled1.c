#include <stdio.h>
#include <time.h>

void main()
{
    time_t *t;
    time(&t);

    printf("Today's date and time : %s",ctime(&t));
    getch();
}



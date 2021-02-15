#include <time.h>
#include <stdio.h>
void main()
{
    time_t x;
time(&x);
    printf("%s",ctime(&x));

    return 0;
}





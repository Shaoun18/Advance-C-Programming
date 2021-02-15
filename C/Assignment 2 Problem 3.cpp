#include <stdio.h>
float product(float i, int j)
{
 float pr,cube;
 pr = i*j;
 cube=pr*pr*pr;
 return(cube);
}

int  main( )
{
 float a, c;
 int b;
 scanf("%f,%d", &a, &b);

 c = product(a, b);
 printf("The product is %.3f\n", c);
 return 0;
}

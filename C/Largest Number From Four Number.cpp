#include<stdio.h>
int main()
{
   int i,numb[4][5];
   for(i=0;i<20;i++)
   {
       printf("Enter [i] - %d: \n",i,);
       scanf("%d",&numb[i][i+1]);
   }
   for(i=0;i<20;i++)
   {
       if(numb[0][0] < numb[i][i+1])
          numb[0][0]=numb[i][i+1];
   }
   printf("%d is largest number",numb[0][0]);

}

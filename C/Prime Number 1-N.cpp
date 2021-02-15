#include <stdio.h>
int main()
{
  int i, Number, count,n;
  scanf("%d",&n);

  printf(" Prime Number from 1 to 100 are: \n");
  for(Number = 1; Number <=n ; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
        printf("%d\n", Number);
    }
  }
  return 0;
}

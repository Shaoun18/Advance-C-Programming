#include <bits/stdc++.h>

using namespace std;

int prime[1000], not_prime[1000];

void sieve( int n)
{
   int i, j , limit=sqrt(n);
   int count=0;
   not_prime[1]=1;
   for(i=4; i<=n;i=i+2)
    not_prime[i]=1;

   prime[count++]=2;

    for(i=3; i<=n;i=i+2)
        if( !not_prime[i])
              {
                prime[count++]=i;
                  if (i<=limit)
                   {
                     for(j=i*i; j<=n; j+=i*2)
                     {
                         not_prime[j]=1;
                     }


                   }

              }

              for(i=1; i<=count; i++)
                cout<<prime[i]<<endl;

}


int main()

{

int start_s=clock();
	sieve(1000);
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
}


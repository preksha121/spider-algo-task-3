#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli n,c=0;lli i,p;
    cin>>n;
    //used prime sieve of eratosthenes to calculate the number of prime number in the range 2 to n
        bool  prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for ( p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for ( i=p*p; i<=n; i += p) 
              {  prime[i] = false; 
                }
        } 
    } 
  lli k=0;
    for ( p=2; p<=n; p++) 
      { if (prime[p]) 
         k++;
      }
 lli s=0;
 //used the formula of 1+2+3+..+n to calculate the sum of all distinct colors assigned to prime numbers 
   s=((k)*(k+1))/2;
        cout<<s;
 return 0;
        
}

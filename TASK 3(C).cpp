#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;;int i,p;
    cin>>n;
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
  int k=0;
    for ( p=2; p<=n; p++) 
      { if (prime[p]) 
         k++;
      }
 long long int s=0;
   s=((k)*(k+1))/2;
        cout<<s;
 return 0;
        
}

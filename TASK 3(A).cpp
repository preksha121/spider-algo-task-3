#include <bits/stdc++.h>
#define lli long long int 
using namespace std;
int so(string n)
    {lli sum=0;lli  k=0;lli i;
    while(n.length()>1)
        {sum=0;
            for(i=0;i<n.length();i++)
            sum+=(n[i]-'0');
        //storing the sum each time in n
        n=to_string(sum);
        //counting the no of operations
        k++;
        }
    //returning the number of operations
    return k;}
int main()
{string n;
lli k;
  cin>>n;
  k=so(n);
  cout<<k<<"\n";
  return 0;
}

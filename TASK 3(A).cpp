#include <bits/stdc++.h>
using namespace std;
int so(string n)
    {long long int sum=0;long long int k=0;long long int i;
    while(n.length()>1)
        {sum=0;
            for(i=0;i<n.length();i++)
            sum+=(n[i]-'0');
        n=to_string(sum);
        k++;
        }
    return k;}
int main()
{string n;long long int k;
  cin>>n;
  k=so(n);
  cout<<k<<"\n";
  return 0;
}

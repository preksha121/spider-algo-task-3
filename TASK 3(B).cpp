#include<bits/stdc++.h>
using namespace std;
int sub(vector<int>v,int sum,int n)
    {bool dp[n+1][sum+1];int i,j;int maxa=-1;
    for (int i = 0; i <= n; i++) 
        dp[i][0] = true; 
    for (int i = 1; i <= sum; i++) 
        dp[0][i] = false;
    for (int i=1; i<=n; i++) 
    { 
        for (int j=1; j<=sum; j++) 
        { 
            dp[i][j] = dp[i-1][j]; 
 
            if (v[i-1] <= j) 
                dp[i][j] |= dp[i-1][j-v[i-1]]; 
        } 
    } 
   
    vector<int>s1;
    for(i=0;i<=sum;i++)
        {if(dp[n][i])
           { s1.push_back(i);
            maxa=max(maxa,i);}
        }
    
    return maxa;}
int main()
    {int n;   int m,no;
    cin>>n>>m;
    vector<int>a;
    int i;int s=0;
    for(i=0;i<m;i++)    
        {cin>>no;
        a.push_back(no);
        s+=no;
        }
  if(n==1)
    {cout<<s<<"\n";
    }
else
    {int x=sub(a,s/2,m);
    cout<<x<<"\n";
    }
return 0;}

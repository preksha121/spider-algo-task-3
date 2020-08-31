#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
// function which returns the maximum sum possible in the range 0 to sum
int sub(vector<lli>v,lli sum,lli n)
    {bool dp[n+1][sum+1];
	lli i,j;
	lli maxa=-1;
	// initialize first column as true. 0 sum is possible with all elemnts
    for (lli i = 0; i <= n; i++) 
        dp[i][0] = true;  
    // with 0 elements, no other sum except 0 is possible 
    for (lli i = 1; i <= sum; i++) 
        dp[0][i] = false;
    for (lli i=1; i<=n; i++) 
    { 
        for (lli j=1; j<=sum; j++) 
        { //If i'th element is excluded 
            dp[i][j] = dp[i-1][j]; 
 			// if i'th element is included
            if (v[i-1] <= j) 
                dp[i][j] |= dp[i-1][j-v[i-1]]; 
        } 
    } 
   
    
    // calculated the maximum sum
    for(i=0;i<=sum;i++)
        {if(dp[n][i])
           { 
            maxa=max(maxa,i);}
        }
    //returns maximum sum
    return maxa;}
int main()
    {lli n; lli m,no;
    cin>>n>>m;
    vector<lli>a;
    lli i;lli s=0;
    for(i=0;i<m;i++)    
        {cin>>no;
        a.push_back(no);
        s+=no;
        }
  if(n==1)
    {cout<<s<<"\n";
    }
else
    {lli x=sub(a,s/2,m);
    cout<<x<<"\n";
    }
return 0;}

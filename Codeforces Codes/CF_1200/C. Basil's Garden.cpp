#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
       long long int n,a,ans=0,mx=-1;
       cin>>n;
       vector<long long>ar,br;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           ar.push_back(a);
       }
       long long dp[n+1];
       dp[n-1]=ar[n-1];
       for(int i=n-2;i>=0;i--)
       {
           if(ar[i]<=ar[i+1])
           {
               dp[i]=dp[i+1]+1;
           }
           else
            dp[i]=ar[i];
       }
       sort(dp,dp+n);
       cout<<max(dp[n-1],ar[n-1]+n-1)<<endl;
    }
}

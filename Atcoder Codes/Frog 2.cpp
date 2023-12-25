#include<bits/stdc++.h>
using namespace std;
int ar[100005],k;
int dp[100005];
int frog(int n)
{
    if(n==0)
        return 0;
    if(dp[n]!=-1) return dp[n];
    int cost=INT_MAX;
    for(int i=1; i<=k; i++)
    {
        if(n-i>-1)
            cost=min(cost,frog(n-i)+abs(ar[n]-ar[n-i]));
    }
    return dp[n]=cost;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    cout<<frog(n-1)<<endl;
}


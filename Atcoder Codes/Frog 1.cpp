#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int dp[100005];
int frog(int n)
{
    if(dp[n]!=-1) return dp[n];
    int cost=INT_MAX;
    if(n==0)
        return 0;
    cost=min(cost,frog(n-1)+abs(ar[n]-ar[n-1]));
    if(n>1)
        cost=min(cost,frog(n-2)+abs(ar[n]-ar[n-2]));
        return dp[n]=cost;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    cout<<frog(n-1)<<endl;
    //cout<<dp[n-5]<<endl;
}

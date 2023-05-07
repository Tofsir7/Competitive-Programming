#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin>>n>>t;
    long long int ar[n+5];
    long long int sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    int in=0,ans=-1,df;
    for(int i=1; i<=n; i++)
    {
        if(sum+ar[i]<=t)
        {
            //cout<<"i="<<i<<endl;
            df=(i-in);
            ans=max(ans,df);
            sum+=ar[i];
        }
        else
        {
            sum+=ar[i];
            sum-=ar[in+1];
            in++;
        }
    }
    if(ans==0)
        ans++;
    else if(ans==-1)
    ans++;
    cout<<ans<<endl;
    //cout<<max(0,ans)<<endl;
}

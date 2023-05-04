#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,x;
    cin>>t;
    while(t--)
    {
        unordered_map<long long int, long long int>mp;
        long long int ans=0;
        //int cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            mp[x-i]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            long long int y=i->second;
            ans+=(y*(y-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

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
        long long int ans=0, n,a,b,c;
        cin>>n;
        vector<int>ar(n);
        map<tuple<int,int,int>,int>mp;
        tuple<int,int,int>t,t1;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n-2;i++)
        {
            t=make_tuple(ar[i],ar[i+1],ar[i+2]);
            t1=make_tuple(-1,ar[i+1],ar[i+2]);
            if(mp[t1]>0)
            {
                ans+=mp[t1]-mp[t];
            }
            mp[t1]++;
            t1=make_tuple(ar[i],-1,ar[i+2]);
            if(mp[t1]>0)
            {
                ans+=mp[t1]-mp[t];
            }
            mp[t1]++;
            t1=make_tuple(ar[i],ar[i+1],-1);
            if(mp[t1]>0)
            {
                ans+=mp[t1]-mp[t];
            }
            mp[t1]++;
            mp[t]++;
        }
        cout<<ans<<endl;
    }
}

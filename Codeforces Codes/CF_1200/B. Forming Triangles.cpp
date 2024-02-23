#include<bits/stdc++.h>
using namespace std;
long long int cnt[300005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,c=0,ans=0;
        set<long long int>v;
        cin>>n;
        for(int i=0; i<300005; i++)
        {
            cnt[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.insert(a);
            cnt[a]++;
        }
        for(auto i: v)
        {
            long long int x=cnt[i];
            ans+=(x*(x-1)*(x-2))/6 + (x*(x-1)/2)*c;
            c+=cnt[i];
        }
        cout<<ans<<endl;
    }

}

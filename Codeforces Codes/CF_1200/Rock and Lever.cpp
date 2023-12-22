#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        map<int,int>mp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
             cin>>a;
            int b=0;
            while(a!=0)
            {
                b++;
                a=a>>1;
            }
            mp[b]++;
        }
        long long int ans=0,l;
        for(auto x:mp)
        {
            l=x.second;
            ans+=(l*l-l)/2;
        }
        cout<<ans<<endl;
    }
}

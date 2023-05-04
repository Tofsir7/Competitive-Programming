#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    map<char,int>mp;
    char c;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<k;i++)
    {
        cin>>c;
        mp[c]++;
    }
    int cnt=0,in=0;
    long long int ar[200005];
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]>0)
        {
            cnt++;
        }
        if(mp[s[i]]==0 || i==n-1)
        {
            ar[in]=cnt;
            in++;
            cnt=0;
        }
    }
    long long ans=0;
    for(int i=0;i<in;i++)
    {
        ans+=(ar[i]*(ar[i]+1))/2;
    }
    cout<<ans<<endl;
}

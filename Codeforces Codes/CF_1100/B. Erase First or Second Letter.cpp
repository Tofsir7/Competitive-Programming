#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        map<char,int>mp;
        int c=0,ans=0;;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                c++;
                ans+=c;
                mp[s[i]]=1;
            }
            else
                ans+=c;
        }
        cout<<ans<<endl;
    }
}

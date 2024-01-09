#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[n+5],br[n+5],mx=0,s=0,ans=0;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        for(int i=0; i<n; i++)
            cin>>br[i];
        int i=1;
        while(i<=k&&i<=n)
        {
            mx=max(mx,br[i-1]);
            s+=ar[i-1];
            //cout<<s<<endl;
            br[i-1]=s+mx*(k-i);
            ans=max(ans,br[i-1]);
            i++;
        }
        cout<<ans<<endl;
    }
}


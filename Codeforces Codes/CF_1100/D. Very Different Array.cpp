#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long ar[n+2],br[m+2],ans=0,x,pos;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        for(int i=0; i<m; i++)
            cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+m,greater<long long int>());
        for(int i=0; i<n; i++)
            ans+=abs(ar[i]-br[i]);
        if(n==m)
        {
            cout<<ans<<endl;
        }
        else
        {
            pos=ans;
            x=n;
            for(int i=m-1;i>=m-n;i--)
            {
                if(x>0)
                {
                    ans+=abs(ar[x-1]-br[i])-abs(br[x-1]-ar[x-1]);
                    x--;
                }
                pos=max(pos,ans);
            }
            cout<<pos<<endl;
        }

    }
}

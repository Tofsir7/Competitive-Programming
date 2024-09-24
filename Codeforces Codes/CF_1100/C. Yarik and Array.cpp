#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,mn=0,ans,sum=0;
        cin>>n;
        vector<int>ar(n),pre(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sum=ar[0];
        ans=ar[0];
        mn=min(ar[0],0);
        for(int i=1;i<n;i++)
        {
            if(abs(ar[i]%2)==abs(ar[i-1]%2))
            {
                mn=0;
                sum=0;
            }
            sum+=ar[i];
            ans=max(ans,sum-mn);
            mn=min(mn,sum);
            //cout<<"sum= "<<sum<<endl;
        }
        cout<<ans<<endl;
    }
}


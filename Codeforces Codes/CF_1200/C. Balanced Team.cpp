#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,mx=0,pos=0,ans=0;
    cin>>n;
    int ar[n+5];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(int i=0; i<n; i++)
    {
        if(ar[pos]+5>=ar[i])
        {
            mx++;
        }
        else
        {
            ans=max(ans,mx);
            mx--;
            pos++;
            i--;

        }
        ans=max(ans,mx);
    }
    pos=n-1,mx=0;
    for(int i=n-1; i>=0; i--)
    {
        if(ar[pos]<=ar[i]+5)
        {
            mx++;
        }
        else
        {
            ans=max(ans,mx);
            mx--;
            pos--;
            i++;

        }
        ans=max(ans,mx);
    }
    cout<<ans<<endl;
}

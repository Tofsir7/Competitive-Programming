#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnt;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<=n;i++)
    {
        cnt=0;
        for(int j=0;j<n;j++)
        {
            if(ar[j]>i)
                cnt++;
        }
        if(cnt==i)
        {
            cout<<i<<endl;
            goto next;
        }
    }
    cout<<-1<<endl;
    next:
        int nxt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}

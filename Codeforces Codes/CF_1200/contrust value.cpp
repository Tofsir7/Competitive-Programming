#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    int ar[n+5];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int u=0,d=0,st=0;
    for(int i=1; i<n; i++)
    {
        if(ar[i]<ar[i-1])
        {
            if(d==0)
            {
                cnt++;
                u=0;
                d=1;
                st=0;
            }
        }
        else if(ar[i]>ar[i-1])
        {
            if(u==0)
            {
                cnt++;
                u=1;
                d=0;
                st=0;
            }
        }
    }
    cout<<cnt+1<<endl;
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

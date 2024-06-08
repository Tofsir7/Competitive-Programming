#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int ar[n+5],ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum<=ar[i])
        {
            ans++;
            sum+=ar[i];
        }
    }
    cout<<ans<<endl;
}

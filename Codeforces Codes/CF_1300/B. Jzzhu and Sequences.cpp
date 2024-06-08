#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int f[4],n,ans;
    cin>>f[1]>>f[2];
    cin>>n;
    f[0]=f[2]-f[1];
    if(((n+2)/3)%2==0)
    {
        ans=f[n%3]*-1;
    }
    else
    {
        ans=f[n%3];
    }
    if(ans<0)
    {
        while(ans<0)
            ans+=1000000007;
        cout<<ans<<endl;
    }
    else
        cout<<ans%(1000000000+7)<<endl;
}

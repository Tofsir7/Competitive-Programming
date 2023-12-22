#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int b,long long int p, long long int m)
{
    if(p==0)
        return 1;
    else if(p%2==1)
    {
        long long int x1=b%m;
        long long int x2=(mod(b,p-1,m))%m;
        return (x1*x2)%m;
    }
    else
    {
        long long int x1=(mod(b,p/2,m))%m;
        return (x1*x1)%m;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,mo=1000000007;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ans=mod(n,k,mo);
        cout<<ans<<endl;
    }
}

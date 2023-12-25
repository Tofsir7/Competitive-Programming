#include<bits/stdc++.h>
using namespace std;
long long int l=1,r=1e19,n,h,ar[105],dm=0;
long long int sum(long long int ar[],long long int n,long long int m)
{
    dm=m;
    for(int i=0;i<n-1;i++)
    {
        dm+=min(m,ar[i+1]-ar[i]);
    }
    return dm;
}
long long int binS(long long int ar[],long long int n, long long int h, long long int l, long long int r)
{
    while(l<=r)
    {
        long long int m=l+(r-l)/2;
        if(sum(ar,n,m)==h)
            return m;
        else if( sum(ar,n,m)<h)
        {
            if(sum(ar,n,m+1)>=h)
                return m+1;
            else
                l=m+1;
        }
        else
            r=m-1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int dm=0;
        cin>>n>>h;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        long long int ans=binS(ar,n,h,l,r);
        cout<<ans<<endl;
    }
}

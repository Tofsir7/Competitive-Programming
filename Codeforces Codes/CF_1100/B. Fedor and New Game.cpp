#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int bit[n+2],BIT[n+2];
    int p[m+2];
    for(int i=0; i<n; i++)
    {
        //bit[i]=0;
        BIT[i]=0;
    }
    for(int i=0; i<=m; i++)
    {
        cin>>p[i];
    }
    int l=n-1;
    while(p[m])
    {
        if(p[m]%2==1)
            BIT[l]=1;
        l--;
        p[m]/=2;
    }

    int ans=0;
    for(int i=0; i<m; i++)
    {
        l=n-1;
        for(int j=0; j<n; j++)
        {
            bit[j]=0;
           // BIT[i]=0;
        }
        while(p[i])
        {
            if(p[i]%2==1)
                bit[l]=1;
            l--;
            p[i]/=2;
        }
        int c=0;
        for(int j=0; j<n; j++)
        {
            //cout<<bit[j];
            if(bit[j]!=BIT[j])
                c++;
        }
        //cout<<"=is the bin"<<endl;
        if(c<=k)
            ans++;
    }
    cout<<ans<<endl;
}

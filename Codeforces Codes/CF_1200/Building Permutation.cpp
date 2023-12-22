#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int ar[n+5],ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        if(ar[i]<i+1)
            ans+=(i+1)-ar[i];
        else
            ans+=ar[i]-i-1;
        //ans+=abs(ar[i],i+1);
    }
    cout<<ans<<endl;
}

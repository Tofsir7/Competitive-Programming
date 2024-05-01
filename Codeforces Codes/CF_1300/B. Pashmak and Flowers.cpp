#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    map<long long int,long long int>mp;
    long long int n;
    cin>>n;
    long long int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
    }
    sort(ar,ar+n);
    if(ar[0]==ar[n-1])
    {
        int x=mp[ar[0]]-1;
        cout<<0<<" "<<(x*(x+1))/2<<endl;
    }
    else
    cout<<ar[n-1]-ar[0]<<" "<<mp[ar[0]]*mp[ar[n-1]]<<endl;
}

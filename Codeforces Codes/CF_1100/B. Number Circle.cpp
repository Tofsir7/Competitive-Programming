#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int ar[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(ar[n-1]>=ar[n-2]+ar[n-3])
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<ar[n-3]<<" "<<ar[n-1]<<" "<<ar[n-2]<<" ";
        for(int i=n-4; i>=0; i--)
            cout<<ar[i]<<" ";
        cout<<endl;
    }
}


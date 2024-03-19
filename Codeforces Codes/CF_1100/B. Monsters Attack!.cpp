#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int rem=0,th=0;
        long long int n,k,flag=1;
        cin>>n>>k;
        long long int ar[n+5],br[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>br[i];
        }
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[br[i]]=ar[i];
        }

        for(int i=1; i<=n; i++)
        {
            if(mp[-i]!=0)
                th+=mp[-i];
            if(mp[i]!=0)
                th+=mp[i];
//cout<<i<<"th="<<th<<endl;
            if(th>i*k)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        }
}
 

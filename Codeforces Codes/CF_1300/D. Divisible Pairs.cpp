#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int Case;
    cin>>Case;
    while(Case--)
    {
        long long int n,x,y,cnt=0,a,b;
        cin>>n>>x>>y;
        int ar[n+2];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++)
        {
            a=(x-(ar[i]%x))%x; b=ar[i]%y;
            cnt+=mp[{a,b}];
            mp[{ar[i]%x,b}]++;
        }
        cout<<cnt<<endl;
    }
}

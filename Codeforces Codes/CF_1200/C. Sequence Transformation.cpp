#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Case;
    cin>>Case;
    while(Case--)
    {
        map<int,int>mp;
        int n,mn=200006,flag=1;
        cin>>n;
        int ar[n+5];
        ar[0]=0;
        for(int i=1; i<=n; i++)
            cin>>ar[i];
        for(int i=1; i<=n; i++)
        {
            if(ar[i]!=ar[i-1])
            {
                mp[ar[i]]++;
            }
        }
        mp[ar[1]]--;
        mp[ar[n]]--;
        for(int i=1; i<=n; i++)
        {
            if(mp[ar[i]]<mn)
                mn=mp[ar[i]];
        }
        cout<<mn+1<<endl;
    }
}

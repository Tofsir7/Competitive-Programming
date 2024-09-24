#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n;
        cin>>n;
        int ar[n+2];
        map<int,int>mp;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
            st.insert(ar[i]);
        }
        int mx=-1;
        for(int i=0;i<=n;i++)
        {
            mx=max(mp[i],mx);
        }
        int x=st.size();
        if(mx>x)
        {
            cout<<x<<endl;
        }
        else if(mx==x)
        {
            cout<<x-1<<endl;
        }
        else
        cout<<mx<<endl;


    }
}

#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main()
{
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    set<int>st;
    //map<int,int>mp;
    //map<int,int>pm;
    //vector<int>v;
    int a;
    cin>>n>>m;
    int v[n+5];
    int pm[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        st.insert(v[i]);
        pm[i+1]=st.size();
    }
    while(m--)
    {
        cin>>a;
        cout<<pm[a]<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n,m;
        cin>>n>>m;
        string s,ss;
        cin>>s;
        vector<int>ar(m);
        for(int i=0; i<m; i++)
            cin>>ar[i];
        cin>>ss;
        set<int>st(ar.begin(),ar.end());
        ar.assign(st.begin(),st.end());
        sort(ss.begin(),ss.end());
        for(int i=0; i<ar.size(); i++)
            s[ar[i]-1]=ss[i];
        cout<<s<<endl;
    }
}

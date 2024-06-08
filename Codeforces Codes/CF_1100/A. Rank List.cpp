#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
bool cmp(pair<int,int>&p, pair<int,int>&q)
{
    if(p.first>q.first)
        return 1;
    else if(p.first==q.first)
        return (p.second<q.second);
    else
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,p,t,cnt=0;
    cin>>n>>k;
    vector<pair<int,int> >process;
    for(int i=0;i<n;i++)
    {
        cin>>p>>t;
        process.push_back({p,t});
    }
    sort(process.begin(),process.end(),cmp);
    for(auto u:process)
    {
        if(process[k-1]==u)
            cnt++;
    }
    cout<<cnt<<endl;
}

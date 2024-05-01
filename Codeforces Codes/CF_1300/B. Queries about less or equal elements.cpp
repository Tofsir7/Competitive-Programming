#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a;
    cin>>n>>m;
    vector<int>ar,br;
    for(int i=0;i<n;i++)
    {
        cin>>a,ar.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a,br.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<m;i++)
    {
        cout<<upper_bound(ar.begin(),ar.end(),br[i])-ar.begin()<<" ";
        //cout<<ans<<" ";
    }
    cout<<endl;
}


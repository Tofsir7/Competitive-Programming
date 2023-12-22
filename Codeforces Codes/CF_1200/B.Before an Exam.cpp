#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,s,mn,mx,smn=0,smx=0;
    cin>>d>>s;
    vector<pair<int,int>>vp;
    for(int i=0;i<d;i++)
    {
        cin>>mn>>mx;
        smn+=mn;
        smx+=mx;
        vp.push_back(make_pair(mn,mx));
    }
    if(smn>s || smx<s)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        int df=s-smn;
        for(int i=0;i<d;i++)
        {
            int dist=vp[i].second-vp[i].first;
            int ans=vp[i].first+min(dist,df);
            df-=min(dist,df);
            cout<<ans<<" ";
        }
        cout<<endl;
    }

}

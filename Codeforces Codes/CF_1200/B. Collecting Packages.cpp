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
        int n,flag=0,x,y,s,p,ss,pp;
        vector<pair<int,int> >ar;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            ar.push_back(make_pair(x,y));
        }
        ar.push_back(make_pair(0,0));
        sort(ar.begin(),ar.end());
        for(int i=0;i<n;i++)
        {
            if(ar[i].second>ar[i+1].second)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            s=0,ss=0;
            for(int i=1;i<=n;i++)
            {
                p=ar[i].first-s;
                s=ar[i].first;
                for(int j=0;j<p;j++)
                    cout<<"R";
                pp=ar[i].second-ss;
                ss=ar[i].second;
                for(int j=0;j<pp;j++)
                    cout<<"U";
            }
            cout<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
//#define optimiz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        //optimiz();
        int n;
        vector<pair<int,int>>v;
        v.push_back(make_pair(0,0));
        int a,b;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        int flag=1;
        for(int i=0; i<n; i++)
        {
            a=v[i+1].first-v[i].first;
            b=v[i+1].second-v[i].second;
            if(v[i].first>v[i+1].first)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            else if(v[i].second>v[i+1].second)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            else if(v[i].second<v[i+1].second && v[i].first==v[i+1].first)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
            else if(a<b)
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


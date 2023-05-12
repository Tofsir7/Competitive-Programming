#include<bits/stdc++.h>
using namespace std;
int degree[1000];
int main()
{
    queue<int>q;
    map<int,int>mp;
    vector<int>v[1000],ans;
    int t;
    cout<<"Enter number of vertics: ";
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);

    }
    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            int x=v[i][j];
                  degree[x]++;
        }
    }
    for(int i=1; i<=t; i++)
    {
        if(!degree[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int c=q.front();
        ans.push_back(c);
        q.pop();
        for(int j=0; j<v[c].size(); j++)
        {
            int cc=v[c][j];
            degree[cc]--;
            if(!degree[cc])
                q.push(cc);
        }
    }
    //cout<<ans.size()<<endl;
    if(ans.size()!=t)
        cout<<"The graph has a cycle"<<endl;
    else
    {
        cout<<"The topological order is: ";
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
            cout<<endl;
    }
}

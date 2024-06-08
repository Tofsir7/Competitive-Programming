#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
long long int cost[100005],Min,sum=0,visited[100005];
vector<vector<int> >v(100005);
void DFS(int vertex)
{
    visited[vertex] = true;
    Min=min(Min,cost[vertex]);
    for(int i=0;i<v[vertex].size();i++)
    {
        int child=v[vertex][i];
        if(!visited[child])
            DFS(child);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1; i<=n; i++)cin>>cost[i];
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<=n;i++)
        visited[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            Min=1e9+2;
            DFS(i);
            sum+=Min;
        }
    }
    cout<<sum<<endl;
}

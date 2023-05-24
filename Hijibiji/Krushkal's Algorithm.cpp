#include <bits/stdc++.h>
using namespace std;
#define n 7
int parent[n];
int find(int x)
{
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);//path compression
}
void group(int u,int v)
{
    int x=find(u);
    int y=find(v);
    if(x!=y)
    {
        parent[x]=y;
    }
}
struct Edge
{
    int u,v,w;
};
bool cmp(Edge x,Edge y)
{
    return x.w<y.w;
}
int main()
{
    for(int i=0; i<n; i++) parent[i]=i;
    int m;
    cout<<"Insert the number of edge"<<endl;
    cin>>m; //input the number of edges
    Edge edges[m];
    for(int i=0; i<m; i++)
    {
        int u,v,w;
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }
    sort(edges,edges+m,cmp);

    int minCost=0;
    for(int i=0; i<m; i++)
    {
        Edge e=edges[i];
        if(find(e.u)!=find(e.v))
        {
            group(e.u,e.v);
            minCost+=e.w;
            cout<<e.u<<" to "<<e.v<<" have been taken and the cost between them is "<<e.w<<endl;
        }
    }
    cout<<"min cost: "<<minCost<<endl;

}

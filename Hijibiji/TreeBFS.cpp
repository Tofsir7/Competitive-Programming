#include<bits/stdc++.h>
using namespace std;
const int mx=10e5+9;
vector<int>adj[mx];
int visit[mx];
void bfs(int x,int item)
{
    int ck=0;
    queue<int>q;
    if(!visit[x])
        q.push(x);
    visit[x]=1;
    while(!q.empty())
    {
        int f=q.front();
        if(f==item)
        {
            cout<<"The Item "<<item<<" is found"<<endl;
            ck++;
        }
        q.pop();
        for(int i=0; i<adj[f].size(); i++)
        {
            if(!visit[adj[f][i]])
            {
                visit[adj[f][i]]=1;
                q.push(adj[f][i]);
            }
        }
    }
    if(ck==0)
        cout<<"The Item "<<item<<" is not found"<<endl;

}
int main()
{
    int node,edg,item,src;
    cout<<"Input the number of node and edge: ";
    cin>>node>>edg;
    cout<<"Insert the tree"<<endl;
    while(edg--)
    {
        int x,y,src;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    cout<<"Insert the item to search: ";
    cin>>item;
    cout<<"Insert the source to start: ";
    cin>>src;
    bfs(src,item);
}

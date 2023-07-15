#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>graph, int start)
{
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (q.empty()==false)
    {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int i=0; i<graph[current].size(); i++)
        {
            int value=graph[current][i];
            if (visited[value]==false)
            {
                visited[value] = true;
                q.push(value);
            }
        }
    }
}
int main()
{
    int n,e;
    cout<<"Enter the number of nodes and edges: ";
    cin>>n>>e;
    vector<vector<int>> graph(n);
    for(int i=0;i<e;i++)

    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int startVertex = 0;

    cout << "BFS Traversal: ";
    BFS(graph, startVertex);

    return 0;
}

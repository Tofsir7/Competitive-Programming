#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>graph, int start)
{
    int numVertices = graph.size();//10
    vector<bool> visited(numVertices, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (q.empty()==false)
    {
        int current = q.front();//4
        q.pop();
        cout << current << " ";
        for (int i=0; i<graph[current].size(); i++)
        {
            int value=graph[current][i];//3
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
    vector<vector<int>> graph =
    {
        {4, 2}, //graph[0][0],graph[0][1]
        {2, 3},//graph[1][0]
        {0, 1, 3, 4},//graph[2][0]
        {1, 2, 4},
        {0,2, 3}
    };

    int startVertex = 0;

    cout << "BFS Traversal: ";
    BFS(graph, startVertex);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void DFS(vector<vector<int>>& graph, int start) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    stack<int> s;
    visited[start] = true;
    s.push(start);
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        cout << current << " ";
        for (int i=0; i<graph[current].size(); i++)
        {
            int value=graph[current][i];
            if (visited[value]==false)
            {
                visited[value] = true;
                s.push(value);
            }
        }
    }
}
int main() {
    vector<vector<int>> graph = {
        {1, 2},
        {0, 2, 3},
        {0, 1, 3, 4},
        {1, 2, 4},
        {2, 3}
    };
    int startVertex = 0;
    cout << "DFS Traversal: ";
    DFS(graph, startVertex);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void BFS(vector<vector<int>>& graph, int start) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
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

    cout << "BFS Traversal: ";
    BFS(graph, startVertex);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// currently minimum distance kon edge er seta ber kori
int MinDistance(vector<int>& distances,vector<bool>& visited, int numVertices) {
    int minDist = INT_MAX;
    int minVertex = -1;
    for (int v = 0; v < numVertices; v++) {
        if (visited[v]==false && distances[v] < minDist) {
            minDist = distances[v];//6
            minVertex = v;// 3
        }
    }
    return minVertex;
}
void dijkstraShortestPath( vector<vector<int>>& graph, int source, int numVertices) {
    vector<int> distances(numVertices, INT_MAX);  // sobgula index e maximum value diye innitialise kore rakhi
    vector<bool> visited(numVertices, false);     // Sobgula first e unvisited mark kore rakhi
    distances[source] = 0;
    for (int count = 0; count < numVertices - 1; count++//5) {
        int u = MinDistance(distances, visited, numVertices); //u==3;
        visited[u] = true;

        for (int v = 0; v < numVertices; v++) {
            if (visited[v]==false && graph[u][v] != 0 && distances[u] != INT_MAX &&
                distances[u] + graph[u][v] < distances[v]) {
                distances[v] = distances[u] + graph[u][v];
            }
        }
    }
    cout << "Shortest distances from vertex " << source << ":" << endl;
    for (int v = 0; v < numVertices; v++) {
        cout << "Vertex " << v << ": " << distances[v] << endl;
    }
}
int main() {
    int numVertices = 6;
    int source = 0;
    vector<vector<int>> graph = {
        {0, 2, 4, 0, 0, 0},// 0th index graph[0][1]
        {2, 0, 1, 4, 2, 0},// 1st index
        {4, 1, 0, 0, 3, 0},// 2nd index
        {0, 4, 0, 0, 3, 1},// 3rd index
        {0, 2, 3, 3, 0, 2},// 4th index
        {0, 0, 0, 1, 2, 0}// 5th index //ডায়াক্সট্রা
    };
    dijkstraShortestPath(graph, source, numVertices);
    return 0;
}

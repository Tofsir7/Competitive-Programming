#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

vector<int> shortestPath(const vector<vector<int>>& graph) {
    int n = graph.size(); // Number of nodes
    int stages = graph[0].size() - 1; // Number of stages

    // Create a DP table to store the shortest path costs
    vector<vector<int>> dp(n, vector<int>(stages + 1, INF));

    // Initialize the last stage of the DP table
    for (int i = 0; i < n; i++) {
        dp[i][stages] = graph[i][stages];
    }

    // Perform dynamic programming
    for (int stage = stages - 1; stage >= 0; stage--) {
        for (int node = 0; node < n; node++) {
            for (int nextNode = 0; nextNode < n; nextNode++) {
                int cost = graph[node][stage] + dp[nextNode][stage + 1];
                dp[node][stage] = min(dp[node][stage], cost);
            }
        }
    }

    // Determine the shortest path
    vector<int> path;
    int currentNode = 0; // Start from the source node (node 0)
    path.push_back(currentNode);

    for (int stage = 0; stage < stages; stage++) {
        int nextNode = -1;
        int minCost = INF;

        // Find the next node with the minimum cost
        for (int node = 0; node < n; node++) {
            if (graph[currentNode][stage] + dp[node][stage + 1] < minCost) {
                minCost = graph[currentNode][stage] + dp[node][stage + 1];
                nextNode = node;
            }
        }

        currentNode = nextNode;
        path.push_back(currentNode);
    }

    return path;
}

int main() {
    // Define the multistage graph
    vector<vector<int>> graph = {
        {INF, 1, 2, 5, INF},
        {INF, INF, INF, INF, 4},
        {INF, INF, INF, INF, 2},
        {INF, INF, INF, INF, 3},
        {INF, INF, INF, INF, INF}
    };

    // Find the shortest path
    vector<int> shortestP = shortestPath(graph);

    // Print the shortest path
    cout << "Shortest path: ";
    for (int node : shortestP) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int shortestPath(vector<vector<int>>& graph)
{
    int numVertices = graph.size();
    vector<int> dp(numVertices, INT_MAX);
    dp[numVertices - 1] = 0;
    for (int i = numVertices - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < numVertices; j++)
        {
            if (graph[i][j] != INT_MAX)
            {
                dp[i] = min(dp[i], graph[i][j] + dp[j]);
            }
        }
    }
    return dp[0];
}
int main()
{
    vector<vector<int>> graph =
    {
        {0, 1, 2, INT_MAX, INT_MAX},
        {INT_MAX, 0, INT_MAX, 3, 4},
        {INT_MAX, INT_MAX, 0, 5, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, 0, 6},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0}
    };
    int shortestDist = shortestPath(graph);
    cout << "Shortest Distance: " << shortestDist << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
int main()
{
    int n, nEdges, c[500], cost[500][500], dist[500], i, j;
    char u[500], v[500];

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the number of edges: ";
    cin >> nEdges;
    // initializing cost(2d) array
    for(i = 'A'; i <= 'Z'; ++i)
    {
        for(j = 'A'; j <= 'Z'; ++j)
        {
            cost[i][j] = INF;
        }
    }
    cost['S']['S'] = 0; // as cost of source -> source = 0
    cout << "Enter the edges:\n";
    for(i = 0; i < nEdges; ++i)
    {
        cin >> u[i] >> v[i] >> c[i];

        cost[u[i]][v[i]] = c[i];
    }
    // PROCESSING
    for(i = 'A'; i <= 'Z'; ++i)
        dist[i] = cost['S'][i]; // source -> i

    for(i = 2; i <= n-1; ++i)   // for every pass
    {
        for(j = 0; j < nEdges; ++j) // traversing edge array
        {
            // u[j], v[j], c[j]
            dist[v[j]] = min(dist[v[j]], dist[u[j]]+c[j]);
        }
    }
    cout << "Shortest distance from source to destination is= " << dist['T'] << '\n';
    return 0;
}

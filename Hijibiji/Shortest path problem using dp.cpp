#include<bits/stdc++.h>
using namespace std;
#define N 6
#define INF INT_MAX
int shortestDist(int graph[N][N])
{
    int dist[N];
    dist[N-1] = 0;
    for (int i = N-2; i>=0; i--)//i=-1
    {
        dist[i] = INF;
        for (int j=i+1; j<N; j++)// i=0   j=1
        {
            if (graph[i][j]==INF)
                continue;
                // source=i destination=j
            if(graph[i][j] +dist[j]<dist[i])
            {
                dist[i]=graph[i][j] +dist[j];
            }
        }
    }
    return dist[0];
}
int main()
{
    int graph[6][6] =
    {
        {INF, 3, 4, INF, INF,INF},
        {INF, INF, 2, 6, 5,INF},
        {INF, INF, INF, 3, 2,INF},
        {INF, INF, INF, INF, 3,2},
        {INF, INF, INF, INF, INF,10},
        {INF, INF, INF, INF, INF, INF},
    };
    int distance=shortestDist(graph);
    cout << "Shortest path from source to destination= "<<distance;
    return 0;
}

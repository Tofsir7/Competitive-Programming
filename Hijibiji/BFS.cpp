#include <iostream>
#include <queue>

using namespace std;

int adj[130][130],vis[130];

int bfs(int sc,int ed)
{
    queue<int> q;

    vis[sc] = 1;
    q.push(sc);


    while(!q.empty()){
        int u = q.front();

        if(u == ed) return true;
        q.pop();

        for(int i = 'A'; i <= 'Z'; i++){
            if(adj[u][i] == 1 && vis[i] == 0){
                vis[i] = 1;
                q.push(i);
            }
        }
    }

    return false;

}
int main()
{
    char ed,u,v;
    int node,edge;
    cout << "Enter the number of node and edge: ";
    cin >> node >> edge;
    for(int i = 1; i <= edge; i++){
         cin >> u >> v;
         adj[u][v] = 1;
         adj[v][u] = 1;
    }

    cout << "Enter Node to find: ";
    cin >> ed;

    int d = bfs(u,ed);

    if(d == 0) cout << "Not Found" <<endl;
    else cout << "Found" << endl;
    return 0;
}

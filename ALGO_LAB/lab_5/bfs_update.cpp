/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int dist[1005];

void bfs (int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;

    while (!q.empty()) {
        int par = q.front();
        q.pop();
        cout << "Visited: " << par <<", Distance: " << dist[par] << endl;

        for (int child : v[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                dist[child] = dist[par]+1;
            }
        } 
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    
    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));
    bfs(src);

    cout << "\nShortest distances from node: "<< src << endl; 
    for (int i=1; i<=n; i++) {
        cout << "Node " << i << ": ";
        if (dist[i] == -1)
            cout << "Not working" << endl;
        else
            cout << dist[i] << endl;
    }
    return 0;
}
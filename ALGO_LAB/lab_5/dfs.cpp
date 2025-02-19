/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];

void dfs(int src) {
    cout << "Visited source / Traversal: " << src << endl;
    vis[src] = true;
    for (int child : v[src]) {
        if (vis[child] == false) {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));

    dfs(src);
    return 0;
}
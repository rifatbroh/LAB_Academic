/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
bool isPathPossible(vector<vector<int>> &m, int N) {
    if (m[0][0] == 0 || m[N-1][N-1] == 0) return false;

    vector<vector<bool>> visited(N, vector<bool>(N, false));
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    vector<pair<int, int>> d = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == N - 1 && y == N - 1) return true;

        for (auto &[dx, dy] : d) {
            int newX = x + dx, newY = y + dy;
            if (newX >= 0 && newY >= 0 && newX < N && newY < N && m[newX][newY] == 1 && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }

    return false;
}
/*
    Time complexity: O (n^n);
    Space complexity: O (n^n);
*/
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> m(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) 
            cin >> m[i][j];
    }

    if (isPathPossible(m, N))
        cout << "true";
    else
        cout << "false";

    return 0;
}
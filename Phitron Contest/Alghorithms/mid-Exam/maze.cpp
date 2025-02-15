#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
map<pair<int, int>, pair<int, int>> parent;  
bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

bool bfs(int si, int sj, int di, int dj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        
        int pi = par.first, pj = par.second;

        if (pi == di && pj == dj) return true; 
        
        for (int i = 0; i < 4; i++) {
            int ci = pi + directions[i].first, cj = pj + directions[i].second;
            if (isValid(ci, cj)) {
                vis[ci][cj] = true;
                parent[{ci, cj}] = {pi, pj};
                q.push({ci, cj});
            }
        }
    }
    return false;
}

void markPath(int di, int dj, int si, int sj) {
    pair<int, int> cur = {di, dj};
    while (cur != make_pair(si, sj)) {
        int x = cur.first, y = cur.second;
        if (grid[x][y] != 'D') grid[x][y] = 'X';
        cur = parent[cur];
    }
}

int main() {
    cin >> n >> m;
    int si, sj, di, dj;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') si = i, sj = j;
            if (grid[i][j] == 'D') di = i, dj = j;
        }
    }

    memset(vis, false, sizeof(vis));

    if (bfs(si, sj, di, dj)) {
        markPath(di, dj, si, sj);
    }

    grid[si][sj] = 'R'; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}

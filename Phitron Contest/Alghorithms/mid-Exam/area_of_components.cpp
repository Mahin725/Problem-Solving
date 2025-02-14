#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int mn;
int cnt;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool isVaild(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj) {
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (isVaild(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    mn = INT_MAX;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                mn = min(cnt, mn);
            }
        }
    }
    if (mn == INT_MAX) {
        cout << -1 << endl;
    }else{
        cout<<mn<<endl;
    }
    
    return 0;
}
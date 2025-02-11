class Solution {
    public:
        int count;
        int n, m;
        bool vis[105][105];
        vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        bool isvaild(int i, int j) {
            if (i < 0 || i >= n || j < 0 || j >= m) {
                return false;
            }
            return true;
        }
        void dfs(int si, int sj, vector<vector<int>>& grid) {
            vis[si][sj] = true;
            for (int i = 0; i < 4; i++) {
                int ci = si + d[i].first;
                int cj = sj + d[i].second;
                if(!isvaild(ci,cj))
                    count++;
                else if(isvaild(ci,cj) && grid[ci][cj]==0)
                    count++;
                else if ( isvaild(ci, cj) && !vis[ci][cj] &&grid[ci][cj] == 1)
                    dfs(ci, cj, grid);
            }
        }
        int islandPerimeter(vector<vector<int>>& grid) {
            count =0;
            n = grid.size();
            m = grid[0].size();
            memset(vis, false, sizeof(vis));
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    if (grid[i][j] == 1 && !vis[i][j])
                        dfs(i, j, grid);
            return count;
        }
    };
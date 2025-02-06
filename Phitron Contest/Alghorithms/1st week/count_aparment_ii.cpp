#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
vector<int>nodes;

int n,m;
bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j] == '.');
}

int dfs(int si, int sj){
    int testCounter = 1;
    vis[si][sj] = true;
    for(int i =0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(isValid(ci,cj) ){
            testCounter += dfs(ci,cj);
        }
    }
    return testCounter;
}
int main()
{
    cin>>n>>m;
    for(int i =0; i<n;i++)
        for(int j =0; j<m; j++)
            cin>>grid[i][j];
    
    memset(vis,false,sizeof(vis));
    for(int i =0;i<n;i++){
        for(int j =0; j<m;j++)
        {
            if (!vis[i][j] && grid[i][j] == '.') {
                int tree_size = dfs(i, j);
                nodes.push_back(tree_size);
            }
        }
    }
    sort(nodes.begin(),nodes.end());
     if (nodes.empty()) {
        cout << -1;
    } else {
        for (int i = 0; i < nodes.size(); i++) {
            if (i > 0) cout << " ";
            cout << nodes[i];
        }
    }
    cout << endl;
    return 0;
}
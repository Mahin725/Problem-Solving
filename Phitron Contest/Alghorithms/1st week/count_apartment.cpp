#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j] == '.');
}
void dfs(int si, int sj){
    vis[si][sj] = true;
    for(int i =0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(isValid(ci,cj) ){
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i =0; i<n;i++)
        for(int j =0; j<m; j++)
            cin>>grid[i][j];
    

    memset(vis,false,sizeof(vis));
    int count =0;
    for(int i =0;i<n;i++){
        for(int j =0; j<m;j++)
        {
            if (!vis[i][j] && grid[i][j] == '.') {
                count++;
                dfs(i, j);
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
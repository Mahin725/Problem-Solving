#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool isVaild(int i,int j)
{
    if(i<0 || i>=n || j<0|| j>=m)
        return false;
    return true;
}
void dfs(int si,int sj)
{
    // cout<<si<<" "<<sj<<endl;
    vis[si][sj] = true;
    for(int i =0; i<4; i++)
    {
        int ci =si+ d[i].first;
        int cj = sj+ d[i].second;
        if(isVaild(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            dfs(ci,cj);
    }
}

int main()
{
    cin>>n>>m;
    
    for(int i = 0; i<n;i++)
        for(int j =0; j<m; j++)
            cin>>grid[i][j];
    
    int si,sj;
    cin>>si>>sj;
    int di,dj;
    cin>>di>>dj;
    dfs(si,sj);
    if(vis[di][dj]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
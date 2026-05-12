class Solution {
public:
    void bfs(int source,vector<vector<int>>& isConnected,vector<int>&vis){
        queue<int>q;
        q.push(source);
        vis[source]=1;

        while(!q.empty()){
            int parent = q.front();
            q.pop();
            for(int child=0;child<isConnected.size();child++){
                if(isConnected[parent][child]==1 && vis[child]==0){
                    q.push(child);
                    vis[child]++;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n+1,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i] == 0){
                cnt++;
                bfs(i,isConnected,vis);
            }
        }
        return cnt;
    }
};
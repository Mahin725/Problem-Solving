class Solution {
    public:
        vector<int> adj_list[200005];
        bool vis[200005];
    
        void dfs(int source) { 
            vis[source] = true; 
            for(auto child:adj_list[source]){
            if(!vis[child])
            {
                dfs(child);
            }
        }
        }
    
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            memset(vis,false,sizeof(vis));
            for (int i = 0; i < edges.size(); i++) {
                int a = edges[i][0];
                int b = edges[i][1];
                adj_list[a].push_back(b);
                adj_list[b].push_back(a);
            }
            dfs(source);
            return vis[destination];
        }
    };
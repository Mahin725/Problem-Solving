class Solution {
public:
    bool bfs(int current,vector<int>&color,vector<vector<int>>&graph){
        queue<int>q;
        q.push(current);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto val:graph[front]){
                //ekono color hoi nai
                if(color[val] == -1){
                    color[val] = 1 - color[front];
                    q.push(val);
                }
                else if(color[val] == color[front]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i] == -1){
                color[i]=1;
                if(bfs(i,color,graph)==false){
                    return false;
                }
                
            }
        }
        return true;
    }
};
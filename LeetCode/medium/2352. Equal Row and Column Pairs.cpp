class Solution {
public:
    // string getHash(int num)
    int equalPairs(vector<vector<int>>& grid) {
        int n= grid.size();
        int totalCurrent = 0;
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                s += to_string(grid[i][j]) + "#"; 
            }
            mp[s]++;
        }

        int cnt = 0;
       for (int j = 0; j < n; j++) {
            string s = "";
            for (int i = 0; i < n; i++) {
                s += to_string(grid[i][j]) + "#";
            }

            cnt += mp[s]; 
        }
        return cnt;
    }
};
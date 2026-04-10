class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int totalSize = 2*n;
    
        vector<int>ans(totalSize);
        for(int i=0;i<n;i++){
            
            ans[i*2] = nums[i];
            ans[i*2+1] = nums[n+i];
        }
        return ans;
    }
};
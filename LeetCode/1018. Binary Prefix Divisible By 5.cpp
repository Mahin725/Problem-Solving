class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        vector<bool>ans(n);
        int x = 0; 
        for(int i=0;i<n;i++){
            x = (x * 2 + nums[i]) % 5 ;  
            if(x == 0){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
};
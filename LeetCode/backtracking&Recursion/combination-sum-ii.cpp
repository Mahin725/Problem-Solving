class Solution {
private:
    void solve(vector<int>& nums, int idx, int target, vector<int>& arr,
               vector<vector<int>>& ans) {
        // basecase
        if (target == 0) {
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            if (nums[i] > target) break;

            arr.push_back(nums[i]);
            solve(nums, i + 1, target - nums[i], arr, ans);
            arr.pop_back();
        }
        
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(),nums.end());
        solve(nums, 0, target, arr, ans);
        return ans;
    }
};


/**
PREVIOUS APPORCH
* // if (idx > nums.size() || target < 0)
        //     return;
        // arr.push_back(nums[idx]);
        // // pick
        // solve(nums, idx + 1, target - nums[idx], arr, ans);
        // // unpick
        // arr.pop_back();
        // solve(nums, idx + 1, target, arr, ans);
*/ 
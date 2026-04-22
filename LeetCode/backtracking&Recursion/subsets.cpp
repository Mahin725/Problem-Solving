class Solution {
public:
    void solve(int idx, vector<int>& nums, vector<int>& arr,
               vector<vector<int>> &ans) {
        // basecase
        if (idx == nums.size()) {
            ans.push_back(arr);
            return;
        }
        // pick
        arr.push_back(nums[idx]);
        solve(idx + 1, nums, arr, ans);

        // unPICK
        arr.pop_back();
        solve(idx + 1, nums, arr, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        solve(0, nums, arr, ans);
        return ans;
    }
};
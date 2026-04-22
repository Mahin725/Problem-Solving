class Solution
{
private:
    void solve(vector<int> &nums, int idx, vector<int> &arr,
               vector<vector<int>> &ans)
    {
        ans.push_back(arr);

        for (int i = idx; i < nums.size(); i++)
        {

            if (i > idx && nums[i] == nums[i - 1])
                continue;

            arr.push_back(nums[i]);
            solve(nums, i + 1, arr, ans);
            arr.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        solve(nums, 0, arr, ans);
        return ans;
    }
};
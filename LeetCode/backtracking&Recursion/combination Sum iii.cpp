class Solution {
private:
    void solve(int start, int k,  int target, vector<int>& arr,
               vector<vector<int>>& ans) {

        // base case
        if (k == 0 && target == 0) { // vaild ansewer
            ans.push_back(arr);
            return;
        }
        if (k == 0 || target < 0)
            return;
        for (int i = start; i <= 9; i++) {
            arr.push_back(i);
            solve(i + 1, k - 1, target - i, arr, ans);
            arr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        solve(1, k, n, arr, ans);
        return ans;
    }
};

//
/**
My Apporch are
i will use recursion and backtracking for this solutions


***/
//
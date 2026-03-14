//time complexity avg case: o(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            int remaining =  target-nums[i];
            auto it = mp.find(remaining);
            if (it != mp.end()) {
                ans.push_back(i);
                ans.push_back(it->second);
                cout<<"from loop"<<i<<" ";
                cout<<"from map"<<it->second;
                break;
            }
            mp.insert({nums[i], i});
        }
        return ans;
    }
};
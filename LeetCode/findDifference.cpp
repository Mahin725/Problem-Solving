class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,pair<int,int>> mp;
        for(auto val:nums1){
            mp[val].first++;
        }
        for(auto val:nums2){
            mp[val].second++;
        }
        vector<vector<int>>ans(2);
        //in my map have all values are injeected
        //for nums1
        for(auto& p:mp){
            int key = p.first;
            pair<int,int>current = p.second;
            if(current.second==0){
                ans[0].push_back(key);
            }
        }
        for(auto& p:mp){
            int key = p.first;
            pair<int,int>current = p.second;
            if(current.first==0){
                ans[1].push_back(key);
            }
        }
        return ans;
    }
};
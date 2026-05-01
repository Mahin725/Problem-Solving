class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>hashmap;
        vector<int>ans;

        for(auto num:arr1){
            hashmap[num]++;
        }
        for(auto num:arr2){
            int cnt = hashmap[num];
            for(int i=0;i<cnt;i++){
                if(i==0){
                    erase(arr1,num);
                }
                ans.push_back(num);
            }
        }
        sort(arr1.begin(),arr1.end());
        for(auto num:arr1){
            ans.push_back(num);
        }
        return ans;
    }
};
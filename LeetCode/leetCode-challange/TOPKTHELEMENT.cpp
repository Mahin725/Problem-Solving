class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int sz = nums.size();
        vector<int>mostFre;
        vector<int>fre(sz,0);
        for(int i =0; i<sz;i++){
            fre[i]++;
        }
        sort(fre.begin(),fre.end());
        for(int i = 0; i<k; i++){
            mostFre.push_back(fre[i]);
        }
        return mostFre;
    }
};
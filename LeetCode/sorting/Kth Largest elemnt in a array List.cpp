class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int>cnt(20001,0);
        for(int i=0;i<nums.size();i++){
            cnt[nums[i] +10000]++;
        }

        for(int i=20000;i>=0;i--){
            k-=cnt[i];
            if(k <=0) return i-10000;
        }
        return -1;
    }
};
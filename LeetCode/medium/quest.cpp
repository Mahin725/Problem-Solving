class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
            } else {
                maxCount = max(maxCount, cnt);
                cnt = 0;
            }
        }

        maxCount = max(maxCount, cnt);

        return maxCount;
    }
};
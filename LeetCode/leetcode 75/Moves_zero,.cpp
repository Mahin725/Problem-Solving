/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Moves_zero,.cpp
 * platform: 
 * Date: 10 - 06 - 2025
 */

 class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex =0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]!=0){
                nums[lastNonZeroIndex++]=nums[i];
            }
        }
        for(int i=lastNonZeroIndex; i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};
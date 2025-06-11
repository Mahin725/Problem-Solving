/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Product of Array Except Self.cpp
 * platform: 
 * Date: 11 - 06 - 2025
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> prefix(n), postfix(n), result(n);

        // prefix
        prefix[0] = 1;
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // postfix
        postfix[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            postfix[i] = postfix[i + 1] * nums[i + 1];
        }

        // result
        for (int i = 0; i < n; i++) {
            result[i] = prefix[i] * postfix[i];
        }
        return result;
    }
};
/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : kidsWithCandies.cpp
 * platform: leetcode
 * Date: 01 - 06 - 2025
 */

/**
 * Calculetion of Complexity
 * Complexity=> max_element take o(n) + o(n)
 * overall => O(n);
 * 
 * */  

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mxCandies = *max_element(candies.begin(),candies.end());
        int n = candies.size();
        vector<bool>output(n);
        for(int i=0; i<n;i++){
            if(candies[i]+extraCandies >= mxCandies)
            {
                output[i] = true;
            }else{
                output[i] = false;
            }
        }
        return output;
    }
};


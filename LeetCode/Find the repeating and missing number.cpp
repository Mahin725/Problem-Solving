#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();
        long long sum_n = n * (n + 1) / 2;
        long long sum_n_sq = n * (n + 1) * (2*n + 1) / 6;

        long long sum_nums = 0, sum_nums_sq = 0;
        for(int num : nums){
            sum_nums += num;
            sum_nums_sq += (long long)num * num;
        }

        long long diff = sum_nums - sum_n;             // A - B
        long long sum_diff = sum_nums_sq - sum_n_sq;  // A^2 - B^2

        long long A_plus_B = sum_diff / diff;         // (A^2-B^2)/(A-B) = A+B

        long long A = (diff + A_plus_B) / 2;
        long long B = A - diff;

        return {(int)A, (int)B};
    }
};

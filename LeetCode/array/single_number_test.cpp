#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  // XOR operation
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums) << endl;  // Output: 4
    return 0;
}

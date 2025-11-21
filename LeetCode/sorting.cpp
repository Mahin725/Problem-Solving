/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int maximizeExpressionOfThree(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int c = nums[0];
    int a = nums[n - 2];
    int b = nums[n - 1];
    cout<< a + b - c;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>num={1,4,2,5};
    maximizeExpressionOfThree(num);
}

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums)
{
    sort(nums);
};
int main()
{
    vector<int>a = {1,2,4,4,5,7};
    cout<<findDuplicate(a);
    return 0;
}
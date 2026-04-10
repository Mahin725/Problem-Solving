#include <bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>nums){
    vector<int>ans;
    for(auto element:nums){
        ans.push_back(element);
    }

    for(auto element:nums){
        ans.push_back(element);
    }
    return ans;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = solve(nums);
    for(auto element:ans){
        cout<<element<<" ";
    }
    return 0;
}
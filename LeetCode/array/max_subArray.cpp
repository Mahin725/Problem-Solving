//Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;
void subArrays(vector<int> &nums){
    int n = nums.size();

    for(int i=0; i<n;i++){ 
        for(int j=i; j<n;j++){
            long long init =0;
            for(int k=i; k<=j;k++){
                // cout<<nums[k]<<" ";
                init+=nums[k];
            }
            pq.push(init);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>arr ={-2,1,-3,4,-1,2,1,-5,4};
    
    subArrays(arr);

    cout<<"This is max element of subarray"<<pq.top();
    return 0;
}
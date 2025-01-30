#include <bits/stdc++.h>
using namespace std;

bool checkDuplicate(vector<int>&nums){
    sort(nums.begin(),nums.end());
    bool res = false;
    for(int i =0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            res = true;
            return;
        }
    }
    return res;
}

int main()
{
    vector<int>v ={1,2,3,4,5,6,2,8};
    if(checkDuplicate(v)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
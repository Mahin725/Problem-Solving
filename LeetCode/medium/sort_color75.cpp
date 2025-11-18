/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 * 
 */ 
#include <bits/stdc++.h>
using namespace std;

// Frist RAW Apporch for 0/1/2 sorting


void sort(vector<int> &nums){
    vector<int>arr0,arr1,arr2;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            arr0.push_back(nums[i]);
        }else if(nums[i]==1){
            arr1.push_back(nums[i]);
        }else{
            arr2.push_back(nums[i]);
        }
    }
    vector<int>finalArray;
    while(!arr0.empty()){
        int tmp = arr0.back();
        finalArray.push_back(tmp);
        arr0.pop_back();
    }
    while(!arr1.empty()){
        int tmp = arr1.back();
        finalArray.push_back(tmp);
        arr1.pop_back();
    }
    while(!arr2.empty()){
        int tmp = arr2.back();
        finalArray.push_back(tmp);
        arr2.pop_back();
    }
    for(int i=0; i<finalArray.size();i++){
        cout<<finalArray[i]<<" ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>arr={2,0,2,1,1,0};
    sort(arr);
    return 0;
}

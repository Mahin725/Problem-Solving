//Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;


void subArrays(vector<int> &nums){
    int n = nums.size();

    for(int i=0; i<n;i++){ //starting point picked
        //picking endling point
        for(int j=i; j<n;j++){
            //printing subarraay starting and ending er majkhner ghuka
            for(int k=i; k<=j;k++){
                cout<<nums[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>arr ={1,4,21,12,41,77};
    subArrays(arr);
    return 0;
}
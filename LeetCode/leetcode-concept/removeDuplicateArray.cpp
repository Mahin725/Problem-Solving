#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec = {10,11,11,12,15,18,19,20};
    for(int i =0; i <vec.size(); i++){
        if(vec[i]==vec[i+1]){
            vec.erase(unique(vec.begin(),vec.end()),vec.end());
            
        }
    }
    cout << vec.size()<<endl;
    return 0;
}

//concepts of this problem=> https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array
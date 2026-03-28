class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        vector<int>arr1;
        vector<int>arr2;
        for(auto ch:word1){
            mp1[ch]++;
        }
        for(auto ch:word2){
            mp2[ch]++;
        }
        for(auto &p : mp1){
            if(mp2.find(p.first) == mp2.end())
                return false;
        }
        for(auto &p : mp2){
            if(mp1.find(p.first) == mp1.end())
                return false;
        }
        for(auto i:mp1){
            arr1.push_back(i.second);
        }
        for(auto i:mp2){
            arr2.push_back(i.second);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        if(arr1==arr2){
            return true;
        }else{
            return false;
        }
    }
};
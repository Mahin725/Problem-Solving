class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(auto ch:stones){
            mp[ch]++;
        }
        int count =0;
        for(auto ch:jewels){
            count+=mp[ch];
        }
        return count;
    }
};
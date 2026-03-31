bool comapre(int a, int b) {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        string s = "";

        sort(nums.begin(), nums.end(), comapre);
        for (auto num : nums) {
            s.append(to_string(num));
        }
        if(s[0]=='0') return "0";
        return s;
    }
};
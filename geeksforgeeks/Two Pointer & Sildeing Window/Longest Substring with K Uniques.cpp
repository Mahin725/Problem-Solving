class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        map<char, int> cnt;
        int ans = -1; 
        int l = 0, r = 0;

        while (r < s.size()) {
            cnt[s[r]]++;

            while (cnt.size() > k) {
                cnt[s[l]]--;
                if (cnt[s[l]] == 0) {
                    cnt.erase(s[l]);
                }
                l++;
            }

            if (cnt.size() == k) {
                ans = max(ans, r - l + 1);
            }

            r++;
        }

        return ans;
    }
};

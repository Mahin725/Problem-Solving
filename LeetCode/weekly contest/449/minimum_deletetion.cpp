class Solution {
public:
    int minDeletion(string s, int k) {
        map<char, int> freq;
        for (char ch : s)
            freq[ch]++;

        if (freq.size() <= k)
            return 0;

        vector<int> freqValues;
        for (auto& p : freq)
            freqValues.push_back(p.second);

        sort(freqValues.begin(), freqValues.end());

        int deletions = 0, distinct = freqValues.size();
        for (int i = 0; i < freqValues.size() && distinct > k; i++) {
            deletions += freqValues[i];
            distinct--;
        }

        return deletions;
    }
};
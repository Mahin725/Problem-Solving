
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int fristSize = word1.size();
        int secSize = word2.size();
        if (fristSize > secSize) {
            for (int i = 0; i < secSize; i++) {
                s += word1[i];
                s += word2[i];
            }
        } else {
            for (int i = 0; i < fristSize; i++) {
                s += word1[i];
                s += word2[i];
            }
        }
        if (fristSize > secSize) {
            s += word1.substr(secSize);
        } else {
            s += word2.substr(fristSize); 
        }
        return s;
    }
};
/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Reverse Words in a String.cpp
 * platform: 
 * Date: 10 - 06 - 2025
 */

 class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());
        string t;
        int wordsLength = words.size();
        for (auto str : words) {
            t.append(str);
                wordsLength--;
                if (wordsLength > 0) {
                    t.append(" ");
                }
        }
        return t;
    }
};
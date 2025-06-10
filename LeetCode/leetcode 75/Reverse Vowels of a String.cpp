/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Reverse Vowels of a String.cpp
 * platform: 
 * Date: 10 - 06 - 2025
 */
class Solution {
public:
    bool isvowel(char c) {
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        } else {
            return false;
        }
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (isvowel(s[i]) && isvowel(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            } else if (!isvowel(s[i]))
                i++;
            else
                j--;
        }
        return s;
    };
};
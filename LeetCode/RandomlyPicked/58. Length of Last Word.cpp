class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        reverse(s.begin(), s.end());
        string word;
        stringstream ss(s);
        while (ss >> word)
        {
            return word.size();
        }
        return 0;
    }
};
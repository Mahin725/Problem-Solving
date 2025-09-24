

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int n = word.size();

        // Case 1: All uppercase
        bool allUpper = true;
        for (char c : word)
        {
            if (!isupper(c))
            {
                allUpper = false;
                break;
            }
        }
        if (allUpper)
            return true;

        // Case 2: All lowercase
        bool allLower = true;
        for (char c : word)
        {
            if (!islower(c))
            {
                allLower = false;
                break;
            }
        }
        if (allLower)
            return true;

        // Case 3: Only first uppercase, rest lowercase
        if (isupper(word[0]))
        {
            bool restLower = true;
            for (int i = 1; i < n; i++)
            {
                if (!islower(word[i]))
                {
                    restLower = false;
                    break;
                }
            }
            if (restLower)
                return true;
        }

        return false;
    }
};

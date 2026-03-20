// Previously Asked In
//     Apple 5 Meta 2 Uber 2 Adobe 2 Amazon 2 Google 2 Yandex 2 Microsoft 2

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, int> mp;
        for (auto ch : stones)
        {
            mp[ch]++;
        }
        int count = 0;
        for (auto ch : jewels)
        {
            count += mp[ch];
        }
        return count;
    }
};
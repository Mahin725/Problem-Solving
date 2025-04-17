#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            map<char, int> charToNum;
            map<int, char> numToChar;
            bool valid = true;

            for (int j = 0; j < n; j++)
            {
                char c = s[j];
                int num = arr[j];

                if (charToNum.count(c) && charToNum[c] != num)
                {
                    valid = false;
                    break;
                }

                if (numToChar.count(num) && numToChar[num] != c)
                {
                    valid = false;
                    break;
                }

                charToNum[c] = num;
                numToChar[num] = c;
            }

            cout << (valid ? "YES\n" : "NO\n");
        }
    }
    return 0;
}

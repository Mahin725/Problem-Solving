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
        string s = "aeiou";
        int ok = n / 5;
        vector<char> v;
        for (int i = 1; i <= ok; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                v.push_back(s[j]);
            }
        }
        int left = n % 5;
        if (left != 0)
        {
            for (int i = 0; i < left; i++)
            {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        for (auto x : v) 
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
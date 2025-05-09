#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<char> original;

    for (int i = 0; i < n; ++i)
    {
        if (original.size() % 2 == 0)
            original.push_front(s[i]);
        else
            original.push_back(s[i]);
    }

    for (char c : original)
        cout << c;
    cout << '\n';

    return 0;
}

// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(5);
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    long long total = 0;
    for (char ch : s)
    {
        int strip = ch - '0';
        total += a[strip];
    }
    cout << total << endl;
    return 0;
}
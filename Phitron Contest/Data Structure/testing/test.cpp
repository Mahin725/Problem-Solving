#include <bits/stdc++.h>
using namespace std;

string isEmptyAfterElimination(string &s) {
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && st.top() == '0' && ch == '1') {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        string s;
        cin >> s;
        cout << isEmptyAfterElimination(s) << '\n';
    }

    return 0;
}
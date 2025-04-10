#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> names(n);

    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    set<string> seen;
    vector<string> result;

    for (int i = n - 1; i >= 0; --i) {
        if (seen.find(names[i]) == seen.end()) {
            seen.insert(names[i]);
            result.push_back(names[i]);
        }
    }

    for (int i = 0; i<result.size();i++) {
        cout << result[i] << '\n';
    }

    return 0;
}

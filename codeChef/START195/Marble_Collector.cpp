#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        set<int> collected;
        for (int i = 0; i < N; ++i) {
            int a;
            cin >> a;
            collected.insert(a);
        }
        cout << M - collected.size() << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
    }

    int max_freq = 0;
    for (auto& [key, val] : freq) {
        max_freq = max(max_freq, val);
    }

    cout << max_freq << endl;
    return 0;
}

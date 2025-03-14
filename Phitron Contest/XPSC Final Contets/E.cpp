#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    unordered_map<int, int> freq;
    map<int, set<int, greater<int>>> freq_to_elements;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int X;
            cin >> X;

            int old_count = freq[X];
            int new_count = old_count + 1;
            freq[X] = new_count;

            if (old_count > 0) {
                auto it = freq_to_elements.find(old_count);
                if (it != freq_to_elements.end()) {
                    it->second.erase(X);
                    if (it->second.empty()) {
                        freq_to_elements.erase(it);
                    }
                }
            }

            
            freq_to_elements[new_count].insert(X);
        } else {
            
            if (freq.empty()) {
                cout << "empty\n";
                continue;
            }

            
            auto max_it = freq_to_elements.rbegin();
            int max_count = max_it->first;
            auto map_it = freq_to_elements.find(max_count);

            
            if (map_it == freq_to_elements.end()) {
                cout << "empty\n";
                continue;
            }

            auto& s = map_it->second;
            if (s.empty()) {
                cout << "empty\n";
                continue;
            }

            int X = *s.begin();
            s.erase(s.begin());

            
            if (s.empty()) {
                freq_to_elements.erase(map_it);
            }

           
            int k = max_count / 2;
            if (k < 1) k = 1; 
            int new_count = max_count - k;

            if (new_count > 0) {
                freq[X] = new_count;
                freq_to_elements[new_count].insert(X);
            } else {
                freq.erase(X);
            }

            cout << X << "\n";
        }
    }

    return 0;
}
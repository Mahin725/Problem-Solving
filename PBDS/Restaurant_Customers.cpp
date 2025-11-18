#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<
    int, null_type, less<int>,
    rb_tree_tag, tree_order_statistics_node_update>
    pbds;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> times;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        times.push_back({a, b});
    }

    sort(times.begin(), times.end());

    vector<int> arrival, departure;
    for (auto element : times) {
        arrival.push_back(element.first);
        departure.push_back(element.second);
    }

    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int i = 0, j = 0, current = 0, max_cust = 0;

    while (i < n && j < n) {
        if (arrival[i] < departure[j]) {
            current++;
            max_cust = max(max_cust, current);
            i++;
        } else {
            current--;
            j++;
        }
    }

    cout << max_cust << "\n";
    return 0;
}

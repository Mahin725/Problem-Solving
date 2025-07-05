    #include <bits/stdc++.h>
    using namespace std;

    void raihanuldev() {
        int n;
        cin >> n;
        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        long long sum_a = 0;
        long long max_a = 0;
        for (int i = 0; i < n; ++i) {
            long long current_a;
            cin >> current_a;
            sum_a += current_a;
            if (current_a > max_a) {
                max_a = current_a;
            }
        }
        long long dx = px - qx;
        long long dy = py - qy;
        long long dist_sq = dx * dx + dy * dy;

        bool canReachFar = (dist_sq <= sum_a * sum_a);

        long long minDist = 0;
        long long diff = 2 * max_a - sum_a;
        if (diff > 0) {
            minDist = diff;
        }
        
        bool canReachclose = (minDist * minDist <= dist_sq);

        if (canReachFar && canReachclose) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;
        while (t--) {
            raihanuldev();
        }

        return 0;
    }
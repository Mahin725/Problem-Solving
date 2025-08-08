#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

// This function calculates the sum of absolute differences for a single test case.
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Create a list of pairs, ensuring the smaller number is always first in the pair.
    vector<pair<long long, long long>> pairs(n);
    for (int i = 0; i < n; ++i) {
        pairs[i] = {min(a[i], b[i]), max(a[i], b[i])};
    }
    
    // Sort the pairs based on the smaller number. This helps in grouping similar numbers
    // and is crucial for the efficient greedy strategy.
    sort(pairs.begin(), pairs.end());

    // Calculate the initial total sum of differences. This is the sum before any rounds are played.
    long long initial_sum = 0;
    for (int i = 0; i < n; ++i) {
        initial_sum += pairs[i].second - pairs[i].first;
    }
    
    // A list to store the potential "gains" from re-pairing.
    vector<long long> gains;

    // The key insight for an efficient solution is to realize that the most beneficial re-pairings
    // are likely to occur between adjacent pairs in the sorted list. This is because these pairs
    // consist of numbers that are closest to each other, which minimizes the total sum of differences
    // after Bahamin's move. We can iterate through these adjacent pairs to find the potential gains.
    for (int i = 0; i + 1 < n; ++i) {
        long long p1_min = pairs[i].first;
        long long p1_max = pairs[i].second;
        long long p2_min = pairs[i+1].first;
        long long p2_max = pairs[i+1].second;

        // The four numbers involved in the re-pairing.
        vector<long long> numbers = {p1_min, p1_max, p2_min, p2_max};
        sort(numbers.begin(), numbers.end());

        // Bahamin's move is to re-pair these four numbers to maximize the local sum of differences.
        // This is always achieved by pairing the smallest with the largest and the two middle numbers.
        long long max_local_sum = (numbers[3] - numbers[0]) + (numbers[2] - numbers[1]);

        // The original local sum of differences for these two pairs.
        long long original_local_sum = (p1_max - p1_min) + (p2_max - p2_min);
        
        // The "gain" is the amount by which the sum decreases if Ali chooses to re-pair these two pairs.
        // A positive gain means the sum is reduced. A negative gain means the sum is increased.
        gains.push_back(original_local_sum - max_local_sum);
    }
    
    // Sort the gains in descending order. Ali will apply the top k gains.
    sort(gains.rbegin(), gains.rend());

    long long final_sum = initial_sum;
    for (int i = 0; i < k && i < gains.size(); ++i) {
        // Ali will only apply a gain if it's positive (i.e., it reduces the total sum).
        // If the best available gain is non-positive, he won't make a move that increases the sum.
        if (gains[i] > 0) {
            final_sum -= gains[i];
        } else {
            break;
        }
    }

    cout << final_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
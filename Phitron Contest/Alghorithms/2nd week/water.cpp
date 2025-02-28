#include <iostream>
#include <vector>

using namespace std;

void maxWaterContainer(int n, vector<int>& heights) {
    int max1 = -1, max2 = -1;
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < n; i++) {
        int val = heights[i];
        if (val > max1) {
            max2 = max1;
            idx2 = idx1;
            max1 = val;
            idx1 = i;
        } else if (val > max2) {
            max2 = val;
            idx2 = i;
        }
    }

   
    int left = min(idx1, idx2);
    int right = max(idx1, idx2);
    cout << left << " " << right << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        maxWaterContainer(n, heights);
    }
    return 0;
}

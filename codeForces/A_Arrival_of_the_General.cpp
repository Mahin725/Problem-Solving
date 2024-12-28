#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    
    int max_pos = -1, min_pos = -1;
    int max_height = -1, min_height = 101;
    
    for (int i = 0; i < n; ++i) {
        if (heights[i] > max_height) {
            max_height = heights[i];
            max_pos = i;
        }
        if (heights[i] <= min_height) {
            min_height = heights[i];
            min_pos = i;
        }
    }
    
    int moves = max_pos + (n - 1 - min_pos);
    
    if (max_pos > min_pos) {
        moves--;
    }
    
    cout << moves << endl;
    
    return 0;
}

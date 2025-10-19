#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--; // Convert to 0-based indexing
    int ni, nj;
    bool allX = true;
    // Top-left
    ni = x - 1;
    nj = y - 1;
    if (ni >= 0 && nj >= 0 && a[ni][nj] != 'x')
        allX = false;
    // Top
    ni = x - 1;
    nj = y;
    if (ni >= 0 && a[ni][nj] != 'x')
        allX = false;
    // Top-right
    ni = x - 1;
    nj = y + 1;
    if (ni >= 0 && nj < m && a[ni][nj] != 'x')
        allX = false;
    // Left
    ni = x;
    nj = y - 1;
    if (nj >= 0 && a[ni][nj] != 'x')
        allX = false;
    // Right
    ni = x;
    nj = y + 1;
    if (nj < m && a[ni][nj] != 'x')
        allX = false;
    // Bottom-left
    ni = x + 1;
    nj = y - 1;
    if (ni < n && nj >= 0 && a[ni][nj] != 'x')
        allX = false;
    // Bottom
    ni = x + 1;
    nj = y;
    if (ni < n && a[ni][nj] != 'x')
        allX = false;
    // Bottom-right
    ni = x + 1;
    nj = y + 1;
    if (ni < n && nj < m && a[ni][nj] != 'x')
        allX = false;
    cout << (allX ? "yes" : "no") << endl;
    return 0;
}


//  // Check all 8 neighbors
//     for(int dx = -1; dx <= 1; dx++) {
//         for(int dy = -1; dy <= 1; dy++) {
//             if(dx == 0 && dy == 0) continue; // Skip the cell itself
//             int ni = x + dx;
//             int nj = y + dy;
//             // Check if neighbor is within bounds
//             if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
//                 if(a[ni][nj] != 'x') {
//                     allX = false;
//                 }
//             }
//         }
//     }
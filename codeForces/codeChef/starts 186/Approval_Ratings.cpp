#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        vector<int> ratings(5);
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            cin >> ratings[i];
            sum += ratings[i];
        }

        int coins = 0;
        sort(ratings.begin(), ratings.end());  
        int i = 0;

        while (sum < 35 && i < 5) { 
            sum += (10 - ratings[i]);
            coins += 100;
            i++;
        }

        cout << coins << endl;
    }
    return 0;
}
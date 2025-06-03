/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Worms.cpp
 * platform: 
 * Date: 03 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int index = 1;
    int worms;
    vector<int> arr(1000006);

    for (int i = 1; i <= n; i++)
    {
        cin >> worms;
        while (worms--)
        {
            arr[index] = i;
            index++;
        }
    }

    int number_juicy_worm;
    cin >> number_juicy_worm;
    while (number_juicy_worm--)
    {
        cin >> worms;
        cout << arr[worms] << endl;
    }
    return 0;
}

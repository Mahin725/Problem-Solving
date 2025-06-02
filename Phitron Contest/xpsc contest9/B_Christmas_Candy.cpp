/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Christmas_Candy.cpp
 * platform:
 * Date: 02 - 06 - 2025
 */
/**
 * Time Complexity=> o(n*n)
 * space complexity=> o(n)
 * */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcae;
    cin >> tcae;
    while (tcae--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        vector<bool> received(n, false);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    received[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (received[i])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

// Need to change logic i need to use BIT-> bianry index tree. 
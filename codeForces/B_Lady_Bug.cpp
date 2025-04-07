#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        bool possible = true;

        if(a[0] =='1' && b[0]!='1')
        {
            possible = false;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1' && b[i-1]!='0')
            {
                possible = false;
                break;
            }
            
        }
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}

/**
 * main logic i think problem.
 */

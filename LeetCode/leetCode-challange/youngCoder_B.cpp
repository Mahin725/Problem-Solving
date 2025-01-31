#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
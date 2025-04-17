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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int left = 1, right = n;
        set<int> st;
        for (int i = 1; i <= n; i++)
            st.insert(arr[i]);

        bool found = false;

        while (right - left + 1 >= 3)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();

            if ((arr[left] == mn || arr[left] == mx))
            {
                st.erase(arr[left]);
                left++;
            }
            else if ((arr[right] == mn || arr[right] == mx))
            {
                st.erase(arr[right]);
                right--;
            }
            else
            {
                cout << left << " " << right << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "-1\n";
    }

    return 0;
}

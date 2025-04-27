#include <bits/stdc++.h>
using namespace std;
 
void CASES()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
        cin >> a[i];
 
    sort(a.rbegin(), a.rend());
 
    int op = 0, curr = a[0], i = 1;
    while (i < k && (curr + a[i]) <= n)
    {
        curr += a[i];
        op += ((2 * a[i]) - 1);
        i++;
    }
    cout << op << '\n';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}
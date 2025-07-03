#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    vector<ll> leftGreater(n), rightSmaller(n);

    ordered_set<int> ost;
    for (int i = 0; i < n; ++i)
    {
        leftGreater[i] = ost.size() - ost.order_of_key(a[i]);
        ost.insert(a[i]);
    }

    ost.clear();

    for (int i = n - 1; i >= 0; --i)
    {
        rightSmaller[i] = ost.order_of_key(a[i]);
        ost.insert(a[i]);
    }

    ll result = 0;
    for (int i = 0; i < n; ++i)
    {
        result += leftGreater[i] * rightSmaller[i];
    }

    cout << result << '\n';
    return 0;
}

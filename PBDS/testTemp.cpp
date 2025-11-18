#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// PBDS Template
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ---------------------- Shortcuts ----------------------
#define int long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

// ---------------------- Loops ----------------------
#define fr(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// ---------------------- Useful Typedefs ----------------------
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef map<int, int> mii;
typedef set<int> si;

// ---------------------- Debug (disable in contest) ----------------------
// #define debug(x) cerr << #x << " = " << x << "\n"

// ---------------------- Constants ----------------------
const int MOD = 1e9 + 7;
const int INF = 1e18;
const double EPS = 1e-9;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

// ---------------------- Fast IO ----------------------
void fast() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ---------------------- GCD / LCM ----------------------
int gcd(int a, int b) { return __gcd(a, b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// ---------------------- Power (Binary Exponentiation) ----------------------
int binpow(int a, int b, int m = MOD) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// ---------------------- Main ----------------------
int32_t main() {
    fast();

    
    return 0;
}

/**
 * In the name of Allah — the Most Gracious, the Most Merciful, the All-Knowing.
 *
 * I begin this code with the name of Allah, the Creator and Sustainer of everything.
 * He is the source of all knowledge and wisdom.
 *
 * If you are reading this and are unfamiliar with Islam,
 * I gently encourage you to explore its beautiful message of peace, purpose, and justice.
 * Learn more: https://www.islam-guide.com/
 *
 * — Raihanul Islam Sharif
 * — A humble Muslim Developer
 */

#include <bits/stdc++.h>
using namespace std;

// ✅ PDBS (Policy-Based Data Structure)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ✅ Macros
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define debug(x) cerr << #x << " = " << x << '\n'
#define YESNO(x) cout << ((x) ? "YES\n" : "NO\n")
#define yesno(x) cout << ((x) ? "Yes\n" : "No\n")

// ✅ Constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 9;
const int MAXN = 2e5 + 5;

// ✅ Math Functions
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

long long power(long long a, long long b, long long mod = MOD)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

long long modInverse(long long a, long long mod = MOD)
{
    return power(a, mod - 2, mod);
}

// ✅ Array Helpers
void inputArray(vector<int> &arr, int n)
{
    arr.resize(n);
    rep(i, 0, n) cin >> arr[i];
}

void printArray(const vector<int> &arr)
{
    for (int x : arr)
        cout << x << ' ';
    cout << '\n';
}

// ✅ Binary Search Wrapper
bool binarySearch(const vector<int> &arr, int x)
{
    return binary_search(all(arr), x);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m))
        return 0;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
        cin >> grid[i];

    pair<int, int> start = {-1, -1}, dest = {-1, -1};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == 'R')
                start = {i, j};
            if (grid[i][j] == 'D')
                dest = {i, j};
        }
    }

    if (start.first == -1 || dest.first == -1)
    {
        for (int i = 0; i < n; ++i)
            cout << grid[i] << '\n';
        return 0;
    }
    if (start == dest)
    {
        for (int i = 0; i < n; ++i)
            cout << grid[i] << '\n';
        return 0;
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    queue<pair<int, int>> q;

    vis[start.first][start.second] = true;
    q.push(start);

    // Order: right, left, up, down
    int dr[4] = {0, 0, -1, 1};
    int dc[4] = {1, -1, 0, 0};

    bool found = false;
    while (!q.empty() && !found)
    {
        auto cur = q.front();
        q.pop();
        int r = cur.first, c = cur.second;
        for (int k = 0; k < 4; ++k)
        {
            int nr = r + dr[k], nc = c + dc[k];
            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;
            if (vis[nr][nc])
                continue;
            char ch = grid[nr][nc];
            if (ch == '#')
                continue;
            if (ch == '.' || ch == 'D')
            {
                vis[nr][nc] = true;
                parent[nr][nc] = {r, c};
                q.push({nr, nc});
                if (ch == 'D')
                {
                    found = true;
                    break;
                }
            }
        }
    }

    if (found)
    {
        pair<int, int> cur = dest;
        while (!(cur == start))
        {
            int r = cur.first, c = cur.second;
            if (grid[r][c] == '.')
                grid[r][c] = 'X';
            cur = parent[r][c];
            if (cur.first == -1)
                break;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << grid[i] << '\n';
    return 0;
}

#include <bits/stdc++.h> 
#include <cmath>
using namespace std;

#define mod (100001)
#define ll long long
#define x first
#define y second
typedef pair<int, int> P;


void solve() {
	ll n, m;
	cin >> n >> m;

	ll l = max(0ll, n - m), r = m + n;
	if (l == r) cout << l << endl;
	for (int i = 30; i >= 0; i--) {
		if ((r >> i & 1) && !(l >> i & 1))	{
			cout << (l | (ll)pow(2ll, i+1)-1) << endl;
			break;
		}
	}
}

int main() {    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
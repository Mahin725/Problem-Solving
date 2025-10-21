#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    map<int, int> freq;
    for(int e : b) freq[e]++;

    set<int> visited;
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        visited.insert(b[i]);
        freq[b[i]]--;
        if(freq.size() == visited.size()){
            ans++;
            for(auto it = freq.begin(); it != freq.end(); ){
                if(it->second == 0) it = freq.erase(it);
                else it++;
            }
            visited.clear();
        }
    }

    cout << ans << endl;
}


int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
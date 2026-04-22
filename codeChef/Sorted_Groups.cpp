#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string A = "", B = "";
        char lastA = 0, lastB = 0;

        for(char c : s) {
            if(c >= lastA && c >= lastB) {
                if(lastA > lastB) {
                    A += c;
                    lastA = c;
                } else {
                    B += c;
                    lastB = c;
                }
            }
            else if(c >= lastA) {
                A += c;
                lastA = c;
            }
            else {
                B += c;
                lastB = c;
            }
        }

        // merge back
        string res = "";
        int i = 0, j = 0;

        for(char c : s) {
            if(i < (int)A.size() && A[i] == c) {
                res += A[i++];
            } else {
                res += B[j++];
            }
        }

        cout << res << '\n';
    }
}
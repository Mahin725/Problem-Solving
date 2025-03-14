#include <bits/stdc++.h>
using namespace std;

void decode_string(string &text) {
    string decoded = "";
    for (int i = 0; i < text.size(); i += 2) {
        char ch = text[i];  
        int count = text[i+1] - '0';  
        decoded.append(count, ch);  
    }
    cout << decoded << "\n"; 
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        string text;
        cin >> text;
        decode_string(text);
    }
    return 0;
}

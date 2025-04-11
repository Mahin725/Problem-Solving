#include <bits/stdc++.h>
using namespace std;

// টাইপিং টাইম হিসাব করার হেল্পার ফাংশন
int typingTime(const string &s) {
    int time = 2; // প্রথম ক্যারেক্টারের টাইম
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1])
            time += 1;
        else
            time += 2;
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int maxTime = -1;
        string bestPassword;

        for (int i = 0; i <= s.size(); i++) {
            for (char ch = 'a'; ch <= 'z'; ch++) {
                string temp = s.substr(0, i) + ch + s.substr(i); // insert ch at position i
                int time = typingTime(temp);
                if (time > maxTime) {
                    maxTime = time;
                    bestPassword = temp;
                }
            }
        }

        cout << bestPassword << endl;
    }

    return 0;
}

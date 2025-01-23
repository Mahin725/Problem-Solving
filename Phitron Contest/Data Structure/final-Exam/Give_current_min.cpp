#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        pq.push(val);
    }

    int query;
    cin >> query; 

    for (int i = 0; i < query; ++i) {
        int operation;
        cin >> operation;

        if (operation == 0) { 
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;

        } else if (operation == 1) {  
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top() << endl;
            }

        } else if (operation == 2) { 
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
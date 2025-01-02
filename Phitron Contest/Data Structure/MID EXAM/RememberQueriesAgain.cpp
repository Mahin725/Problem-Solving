#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> &mylist) {
    cout << "L -> ";
    for (int value : mylist) {
        cout << value << " ";
    }
    cout << endl;
}
void print_backword(list<int> &mylist) {
    cout << "R -> ";
    
    auto it = mylist.end();
    
    if (!mylist.empty()) {
        --it; 
    }

    while (it != mylist.begin()) {
        cout << *it << " ";
        --it; 
    }
    if (!mylist.empty()) {
        cout << *it << " ";
    }

    cout << endl;
}

int main() {
    int q;
    cin >> q;

    list<int> mylist;

    while (q--) {
        int x;
        size_t v; 

        cin >> x >> v;

        if (x == 0) {
            mylist.push_front(v);
        } else if (x == 1) {
            mylist.push_back(v);
        } else if (x == 2) {
            
            if (v < mylist.size()) {
                auto it = mylist.begin();

                for (size_t i = 0; i < v; ++i) {
                    ++it; 
                }

                mylist.erase(it);
            }
        }

        print_forward(mylist);
        print_backword(mylist);
    }

    return 0;}
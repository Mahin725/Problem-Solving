#include <bits/stdc++.h>
using namespace std;

void print_forward( list<int>& l) {
    cout << "L -> ";
    for (auto val : l) {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward( list<int>& l) {
    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> l;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            l.push_front(v); 
            print_forward(l);
            print_backward(l);}
        if (x == 1) {
            l.push_back(v);
            print_forward(l);
            print_backward(l);}
       if (x == 2) {
           if(v >= 0 && v< l.size()){
            l.erase(next(l.begin(),v));
           }
            print_forward(l);
            print_backward(l);
        }
    }

    return 0;
}
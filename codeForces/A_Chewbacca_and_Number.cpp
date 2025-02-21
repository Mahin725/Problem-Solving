#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    if (x[0] != '9' && ('9' - x[0] + '0' < x[0])) {
        x[0] = '9' - x[0] + '0';
    }

    for (int i = 1; i < x.size(); i++) {
        if ('9' - x[i] + '0' < x[i]) {
            x[i] = '9' - x[i] + '0';
        }
    }

    cout << x << endl;
    return 0;
}

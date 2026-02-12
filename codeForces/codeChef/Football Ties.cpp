#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;
        for (int d = 0; d <= min(x, y); ++d) {
            if ((x - d) % 3 == 0 && (y - d) % 3 == 0) {
                cout << d << endl;
                break;
            }
        }
    }
    return 0;
}

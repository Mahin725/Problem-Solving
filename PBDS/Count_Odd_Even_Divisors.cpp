#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int odd = 0, even = 0;
        for (int i = 1; i <= N; ++i) {
            if (N % i == 0) {
                if (i % 2 == 0) even++;
                else odd++;
            }
        }
        cout << odd << " " << even << endl;
    }
    return 0;
}
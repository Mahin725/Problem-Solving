#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int N;
        cin >> N; 
        
        int totalBreaks = 0;
        for (int i = 0; i < N; ++i) {
            int stickLength;
            cin >> stickLength; 
            
            if (stickLength > 1) {
                totalBreaks += (stickLength - 1); 
            }
        }
        
        cout << totalBreaks << endl;
    }
    
    return 0;
}

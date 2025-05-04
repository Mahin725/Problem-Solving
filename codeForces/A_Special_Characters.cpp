#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n%2){
            cout<<"NO\n";
            continue;
        }
        int v = n/2;
        cout<<"YES\n";
        for(int i=1; i<=v;i++){
            if(i%2)cout<<"AA";
            else cout<<"BB";
        }
        cout<<"\n";
    }
    return 0;
}

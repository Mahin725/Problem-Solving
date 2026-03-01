#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> pos(n+1);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            pos[arr[i]] = i;
        }

        int m = n;

        for(int i = 0; i < n; i++){
            if(arr[i] == m){
                m--;
            }
            else{
                int last = pos[m];
                reverse(arr.begin() + i, arr.begin() + last + 1);
                break;
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

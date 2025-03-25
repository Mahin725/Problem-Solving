#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    while (s.size() < 4) {
        s = "0" + s;
    }
    cout << s << endl;
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int num = n;
//     int count = 0;
//     while(n)
//     {
//         n = n/10;
//         count++;
//     }
//     for(int i =0; i<4-count; i++)
//     {
//         cout<<0;
//     }
//     cout<<num;
//     return 0;
// }

/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    if(x%5==0){
        cout<<x/5<<endl;
    }else{
        cout<<x/5+1<<endl;
    }
    // int ans;
    // ;
    // if (x > 5)
    // {
    //     ans = x / 5;
    //     int mod = x % 5;
    //     if (mod <= 4)
    //     {
    //         ans++;
    //     }
    // }else{
    //     ans=1;
    // }
    // cout << ans << endl;
    return 0;
}

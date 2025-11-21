/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;
int minLengthAfterRemovals(string s)
{
    int count_a = 0;
    int count_b =0;
    for (char ch : s)
    {
        if (ch == 'a')
            count_a++;
        else
        {
            count_b++;
        }
    }
    int ans = count_a - count_b;
    cout<<ans<<endl;
    cout<<count_a<<endl;
    cout<<count_b<<endl;
    return abs(ans);    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "abbba";
    cout<<minLengthAfterRemovals(s)<<endl;
    return 0;
}

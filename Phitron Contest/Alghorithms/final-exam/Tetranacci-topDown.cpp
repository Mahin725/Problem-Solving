#include <bits/stdc++.h>
using namespace std;
int dp[50];

int topDown(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (n == 2 || n == 3)
        return n - 1;
    if (dp[n] != -1)
    {
        return dp[n];
    }else{
        dp[n] = topDown(n-1)+topDown(n-2)+topDown(n-3)+ topDown(n-4);
        return dp[n];
    }
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << topDown(n) << endl;
    return 0;
}
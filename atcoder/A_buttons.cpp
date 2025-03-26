// Submission Link: https://atcoder.jp/contests/abc124/submissions/64193180
// Author: Raihanul islam sharif.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = max({a + (a - 1), a + b, b + (b - 1)});
    cout<<ans<<endl;
    return 0;
}


// Apporch
/**
 * x size er button e click korle x-coin pabo but oita 1 descrese hoye jabe.
 * x and y nite parbo
 * x or y dui bar kore nite parbo
 * */ 
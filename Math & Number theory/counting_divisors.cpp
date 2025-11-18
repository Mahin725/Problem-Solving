#include <bits/stdc++.h>
using namespace std;

const int mxN = 30;
vector<vector<int>> divisors(mxN);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < mxN; i++)
    {
        for (int j = i; j < mxN; j += i)
        {
            divisors[i].push_back(j);
        }
    }
    for (auto ch : divisors)
    {
        for(auto value:ch){
            cout<<value<<" ";
        }
        cout<<endl;
    }

    return 0;
}
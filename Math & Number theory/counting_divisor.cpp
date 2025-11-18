#include <bits/stdc++.h>
using namespace std;

const int mxN =1e6+9;
vector<int>divisors(mxN);


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1; i<mxN;i++)
    {
        for(int j=i; j<mxN; j+=i){
            divisors[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n]<<endl;
    }
    return 0;
}
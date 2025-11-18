#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    multiset<int> ml;
    for(int i =0; i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }

    for(auto value:ml)
    {
        cout<<value<<" ";
    }
    //everything similar to set just same difeernet
    /**
     * defintly they are sorted 
     * set doesn't contain duplicate value but Multi-set contain duplicate value.
     * tha't it. for more know do google search.
     * */ 
    return 0;
}
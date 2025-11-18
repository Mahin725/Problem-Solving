#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // init map
    map<int, int> mp;
    // insert at map
    mp[1] = 101;
    mp[2] = 102;
    mp[5] = 132;
    // mp.insert({6,56});

    // travarse
    //  for(auto [key,value]:mp)
    //  {
    //      cout<<key<<" => "<<value<<'\n';
    //  }
    for (auto it : mp)
    {
        cout << it.first << " => " << it.second << "\n";
    }

    // find
    auto it = mp.find(22);
    
    if (it == mp.end())
    { // beacuse if not found key then find function return end pointer
        cout << "Key not found!";
    }
    else
        cout << it->second << endl;

    cout<<mp[34]<<endl;
    for (auto it : mp)
    {
        cout << it.first << " => " << it.second << "\n";
    }
    return 0;
}

/**
 * if not found then find funciton return end iterrator.
 * or if we use mp[key] then not found then it saved on map inital 0 value.
 * 
*/
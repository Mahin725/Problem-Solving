#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, customerNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1) {
            int money;
            cin >> money;
            s.insert({customerNo, money});
            ml.insert({money, -customerNo});
            customerNo++;
        } 
        else if (type == 2) {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase(ml.find({money, -pos}));
        } 
        else { // type == 3
            int money = ml.rbegin()->first;
            int pos = -ml.rbegin()->second;
            ans.push_back(pos);
            ml.erase(prev(ml.end()));
            s.erase({pos, money});
        }
    }

    for (auto val : ans)
        cout << val << " ";
    cout << "\n";

    return 0;
}

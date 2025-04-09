#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> database;

    while (n--)
    {
        string username;
        cin >> username;

        auto it = find(database.begin(), database.end(), username);
        if (it != database.end())
        {
            string base = username;
            while (!base.empty() && isdigit(base.back()))
            {
                base.pop_back();
            }

            int suffix = 1;
            string new_username;
            while (true)
            {
                new_username = base + to_string(suffix);
                if (find(database.begin(), database.end(), new_username) == database.end())
                {
                    break;
                }
                suffix++;
            }

            database.push_back(new_username);
            cout << new_username << "\n";
        }
        else
        {
            database.push_back(username);
            cout << "OK\n";
        }
    }

    return 0;
}

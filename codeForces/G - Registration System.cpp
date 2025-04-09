#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> database;

    while (n--)
    {
        string username;
        cin >> username;

        if (database.find(username) == database.end())
        {
            database[username] = 1;
            cout << "OK\n";
        }
        else
        {
            string new_username;
            int suffix = database[username];

            while (true)
            {
                new_username = username + to_string(suffix);
                if (database.find(new_username) == database.end())
                {
                    break;
                }
                suffix++;
            }

            database[username] = suffix + 1;     
            database[new_username] = 1; 
            cout << new_username << "\n";
        }
    }

    return 0;
}

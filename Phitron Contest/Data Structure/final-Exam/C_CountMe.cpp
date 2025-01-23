#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    cin.ignore();
    while (tcase--) {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;

        map<string,int>mp;
        int max = 0;
        string final_word;

        while (ss >> word) {
            mp[word]++;


            if (mp[word] > max) {
                max = mp[word]; 
                final_word = word;
            }
        }


        cout << final_word << " " << max << endl;
    }
    return 0;
}


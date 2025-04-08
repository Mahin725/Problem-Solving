/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: 
 * platform: 
 * Date: 08 - 04 - 2025
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;cin>>tcase;
    while(tcase--)
    {
        string x;
        int k;
        cin>> x>>k;
        string yStr = "";
        for(int i =0;i<k;i++)
        {
            yStr +=x;
        }
        //sixe jodi 18 er theke boro hoi tahole no
        if(yStr.size()>18){
            cout<<"NO"<<endl;
            continue;
        }
        ll y = 0;
        for (char c : yStr){

         y = y * 10 + (c - '0');
        }
        //check eita prime kina
        if (y <= 1) {
            cout << "NO\n";
            continue;
        }
        bool is_prime = true;
        if (y == 2 || y == 3) {
            is_prime = true;
        } else if (y % 2 == 0 || y % 3 == 0) {
            is_prime = false;
        } else {
            for (ll i = 5; i * i <= y; i += 6) {
                if (y % i == 0 || y % (i + 2) == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        cout << (is_prime ? "YES\n" : "NO\n");

    }   
    return 0;
}
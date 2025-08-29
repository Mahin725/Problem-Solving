// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Problem Summary:
    /**
     * we are building a Community where need to verify eligableiity.
     * each stdudent have Computer Science Degree
     * also need to have strong mindset and maintain regulartiy then we can approve membership
     * otherways not ability to join this Club.
     * Write a Program for check ability.
     * */

    //  printf("Welcome to BSPI Programming Club Community.....\n")
    string degree;
    bool mindset, regulartity;
    cout << "Welcome to BSPI Programming Club Community..." << endl;
    cout << "Please Fillup this Form" << endl;
    cout << "Do you have CSE Degree? if have just write CSE else NO: ";
    cin >> degree;
    cout << "If you have strong mindset write 1 else 0: ";
    cin >> mindset;
    cout << "If you have strong regulartiy write 1 else 0: ";
    cin >> regulartity;

    if (degree == "CSE" && mindset && regulartity)
    {
        cout << "AWW!! you have potensial to join club\n";
    }
    else
    {
        cout << "Bro/apu, tumar value nai..";
    }

    return 0;
}
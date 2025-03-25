#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase; cin>>tcase;

    while(tcase--)
    {
        long long m,a,b,c;
        cin>>m>>a>>b>>c;

        //age frist a row ta fill kori
        long long row_A = min(a,m);
        long long row_A_remaining_seats = m-row_A;
        //secound row
        long long row_B = min(b,m);
        long long row_B_remaining_seats = m-row_B;
        // ekn c pabe
        long long total_remaing_seats = row_A_remaining_seats+row_B_remaining_seats;
        long long c_use = min(c,total_remaing_seats);

        long long total_monkey = row_A+row_B+c_use;
        cout<<total_monkey<<endl;
    }
    return 0;
}
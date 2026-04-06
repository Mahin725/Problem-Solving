#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin>>tcase;
    while(tcase--){
        int array[7],max_a=-68,sum=0;
        for (int i=0;i<7;i++) {
            cin>>array[i];
            sum+=array[i];
            max_a=max(max_a,array[i]);
        }
        cout<<(-1*sum)+(2*max_a)<<endl;
    }
    return 0;
}
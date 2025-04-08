/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/contest/501/submission/314489462
 * platform: codeforces div2 
 * Date: 08 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<string,string>ans,has;
    for(int i=1; i<=n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(has.find(a) !=has.end())
        {
            string s = has[a];
            ans[s] = b;  //answeer map e new username ta oi old man er jonno save hobe.
            has.erase(a);
            has[b] = s;
        }else{
            ans[a] = b;
            has[b] = a;
        }
    }
    cout<<ans.size()<<endl;
    for(auto user:ans){
        cout<<user.first<<" "<<user.second<<endl;
    }
    return 0;
}
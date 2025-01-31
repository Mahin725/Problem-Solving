#include <bits/stdc++.h>
using namespace std;

bool vaildAnagram(string s,string t){
    if(s.size()!=t.size())
        return false;
    
}

int main()
{
    vector<int>v ={1,2,3,4,5,6,2,8};
    if(vaildAnagram("anagram","maream")){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
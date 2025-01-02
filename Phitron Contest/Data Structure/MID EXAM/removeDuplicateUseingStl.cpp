#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>mylist;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }else{
            mylist.push_back(val);
        }
    }
    mylist.sort();
    mylist.unique();

    for(int value:mylist){
        cout <<value<<" ";
    }
    return 0;
}
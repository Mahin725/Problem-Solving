#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    deque<int>dq(n);
    for(int i =0; i<n;i++)
    {
        cin>>dq[i];
    } 
    dq.push_front(4); //o(1) e front e push kora jai, jha vector e jhai na
  
    for(auto value:dq)
    {
        cout<<value<<" ";
    }
    cout<<"\n";
    return 0;
}

/**
 * mainly deque is similar 90% vector but here are most important some function use give use better efficianty than vector. 
 * in deque we can push on front(),with constant time complexity
 * alos we can remove front with constrant time comlexity
 * why we use vector if similar deque?
 * the answer is: deque consume memmory for save iterator which almost vector er 2ghun mememory nia neh.  
 */

/**
 * Priority Queue ->internally heap DS.
 * maxHeap,minHeap
 * sorted and non descreing and non increaseing
 * push - o(logN)
 * top - o(1)
 * pop - O(LogN)
 * */ 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    priority_queue<int,vector<int>,greater<int>>pq_min;
    priority_queue<int>pq; //this is non incresing 
    pq.push(1);
    pq.push(3);
    pq.push(3);
    pq.push(5);
    pq.push(4);

    pq_min.push(1);
    pq_min.push(1);
    pq_min.push(4);
    pq_min.push(2);
    pq_min.push(6);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    while(!pq_min.empty())
    {
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
    return 0;
}
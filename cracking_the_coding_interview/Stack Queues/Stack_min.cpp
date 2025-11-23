/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;


// Problem Summary:
/**
 * How would you design a stack which, in addition to push pop,has a functionMin which return current minimum value. 
 * push pop and min should be always O(1) constant time. 
 * this is the problem. 
*/

// TWO STACK Apparch.




stack<int> myStack;
stack<int> minStack;

void push(int item)
{
    if (myStack.empty())
    {
        myStack.push(item);
        minStack.push(item);
    }
    else
    {
        myStack.push(item);
        int curr_min = minStack.top();
        if (item < curr_min)
        {
            minStack.push(item);
        }
        else
        {
            minStack.push(curr_min);
        }
    }
}

void pop()
{
    myStack.pop();
    minStack.pop();
}
void min(){
    cout<<"This stack minium Value: "<<minStack.top();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    push(5);
    push(6);
    cout << minStack.top() << endl;
    pop();
    
    push(3);
    push(7);
    push(12);
    push(1);
    push(2);
    cout << minStack.top() << endl;
    pop();
    pop();
    cout << minStack.top() << endl;
    min();

    return 0;
}

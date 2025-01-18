#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

vector<int> level_order_traversal(Node* root){
    queue<Node*>q;
    vector<int>v;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();
        //node ta nia kaj
        cout<<front->val<<" ";
        v.push_back(front->val);
        //child push kora
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
        
    }
    return v;
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    //build connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;

    vector<int> elements = level_order_traversal(root);
    for(int val:elements){
        cout<<val <<endl;
    }
    return 0;
}
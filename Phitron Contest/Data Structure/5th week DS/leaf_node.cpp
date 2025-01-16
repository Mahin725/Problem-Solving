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

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        // step-1 ber kore ana maal ta ke
        Node* parent = q.front();
        q.pop();

        //step-2 Node nia Kaj kora
        int l,r;
        Node* myleft,*myright;
        cin>>l>>r;
        if(l==-1) myleft = NULL;
        else myleft =  new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        parent->left = myleft;
        parent->right = myright;

        //step-3 Childreen push kora
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

void collect_leaf_node(Node* root, vector<int>& v) {
    if (!root) return;
    if (!root->left && !root->right) {
        v.push_back(root->val);
    }
    collect_leaf_node(root->left, v);
    collect_leaf_node(root->right, v);
}


int main()
{
    Node* root = input_tree();
    vector<int>v;
    collect_leaf_node(root,v);
    sort(v.rbegin(),v.rend());
    for (int val : v) { 
        cout << val << " ";
    }
    return 0;
}
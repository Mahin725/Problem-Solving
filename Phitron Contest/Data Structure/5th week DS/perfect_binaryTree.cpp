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

bool isPerfectTree(Node* root) {
    if (!root) return true;

    queue<Node*> q;
    q.push(root);

    bool shouldHaveNoChild = false;
    int nodeCount = 0;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        nodeCount++;

        if (current->left) {
            if (shouldHaveNoChild) return false; 
            q.push(current->left);
        } else {
            shouldHaveNoChild = true; 
        }

        if (current->right) {
            if (shouldHaveNoChild) return false; 
            q.push(current->right);
        } else {
            shouldHaveNoChild = true; 
        }
    }

    return (nodeCount & (nodeCount + 1)) == 0;
}
int main()
{
    Node* root = input_tree();
    if(isPerfectTree(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
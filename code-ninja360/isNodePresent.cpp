#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {   //step-1-> front ta ber kore ana
        Node* parent = q.front();
        q.pop();

        Node *myleft, *myright;
        int l, r;
        cin >> l >> r;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        parent->left = myleft;
        parent->right = myright;
         //step-3 Childreen push kora
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
//
bool traversal(Node* root,int x){
    if(root ==NULL){
        return false;
    }
    if(root->val==x)
        return true;
    bool l = traversal(root->left,x);
    bool r = traversal(root->right,x);
    if(l==true || r==true)
        return true;
    else{
        return false;
    }


}
int main()
{
    Node* root = input_tree();
    // cout<<root->val;
    bool isfound = traversal(root,30);
    if(isfound){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
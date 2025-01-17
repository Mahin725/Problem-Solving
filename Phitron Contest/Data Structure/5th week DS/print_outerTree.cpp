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


void collect_left_boundary(Node* root, vector<int>& leftNodes) {
    if (root == NULL)
        return;
     
    if (root->left) {
        collect_left_boundary(root->left, leftNodes);
        leftNodes.push_back(root->val);
    }else{
        collect_left_boundary(root->right, leftNodes);
        leftNodes.push_back(root->val);
    }
    
}
void collect_rihgt_boundary(Node* root, vector<int>& rightNodes){
    if (root == NULL)
        return;
    if (root->right) {
        rightNodes.push_back(root->val);
        collect_rihgt_boundary(root->right, rightNodes);
    }else{
        collect_rihgt_boundary(root->left, rightNodes);
        rightNodes.push_back(root->val);
    }
}

void print_outer_nodes(Node* root) {
    if (root == NULL)
        return;
    
    vector<int> leftNodes, rightNodes;
    if(root->left){

    collect_left_boundary(root->left, leftNodes);
    }
    if(root->right) {

    collect_rihgt_boundary(root->right,rightNodes);
    }
    for (int val : leftNodes) {
        cout << val << " ";
    }
    cout<<root->val<<" ";
    for (int val : rightNodes) {
        cout << val << " ";
    }
}

int main()
{
    Node* root = input_tree();
    print_outer_nodes(root);
    return 0;
}
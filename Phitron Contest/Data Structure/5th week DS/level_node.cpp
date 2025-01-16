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
void print_level(Node* root, int level) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    int current_level = 0;

    while (!q.empty()) {
        int size = q.size();

        if (current_level == level) {
            for (int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        current_level++;
    }

    cout << "Invalid" << endl;
}
int main()
{
    Node* root = input_tree();
    int level;
    cin >> level;

    print_level(root, level);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myleft, * myright;

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

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

void collect_left_boundary(Node* root, vector<int>& leftNodes) {
    if (root == NULL)
        return;

    if (root->left) {
        leftNodes.push_back(root->val); // Add current node
        collect_left_boundary(root->left, leftNodes); // Go left
    } else if (root->right) {
        leftNodes.push_back(root->val); // Add current node
        collect_left_boundary(root->right, leftNodes); // Go right if no left child
    }
}

void collect_right_boundary(Node* root, vector<int>& rightNodes) {
    if (root == NULL)
        return;

    if (root->right) {
        collect_right_boundary(root->right, rightNodes); // Go right first
        rightNodes.push_back(root->val); // Add current node after recursive call
    } else if (root->left) {
        collect_right_boundary(root->left, rightNodes); // Go left if no right child
        rightNodes.push_back(root->val); // Add current node after recursive call
    }
}

void collect_leaves(Node* root, vector<int>& leaves) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        leaves.push_back(root->val); // Leaf node
    } else {
        collect_leaves(root->left, leaves);
        collect_leaves(root->right, leaves);
    }
}

void print_outer_nodes(Node* root) {
    if (root == NULL)
        return;

    vector<int> leftBoundary, rightBoundary, leaves;

    if (root->left)
        collect_left_boundary(root->left, leftBoundary);
    collect_leaves(root, leaves);
    if (root->right)
        collect_right_boundary(root->right, rightBoundary);

    // Print in the required order
    cout << root->val << " "; // Root
    for (int val : leftBoundary)
        cout << val << " ";
    for (int val : leaves)
        cout << val << " ";
    for (int val : rightBoundary)
        cout << val << " ";
    cout << endl;
}

int main() {
    Node* root = input_tree();
    print_outer_nodes(root);
    return 0;
}

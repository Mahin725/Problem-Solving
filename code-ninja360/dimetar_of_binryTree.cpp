int mx ;

int max_height(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    if (root->left==NULL && root->right == NULL){
        return 1;  //1 becuse height 1 theke suru hoise jodi 0 theke hoto tahole zero ditam
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r) +1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
    mx =0;
	int h = max_height(root);
    return mx;
}

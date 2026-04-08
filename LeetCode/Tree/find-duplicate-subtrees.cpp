/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
        vector<TreeNode*>duplicatTrees;
        map<string,int>freqHash;
        string findDuplicate(TreeNode* currentNode){
            //base case
            if(currentNode==NULL)
                return "";
            //leftSubtreeCount
            string leftSubTree = findDuplicate(currentNode->left);
            //rightSubtreeCont
            string rightSubTree = findDuplicate(currentNode->right);
            //string hashing
            string currentHash = to_string(currentNode->val) +"#"+leftSubTree + "#"+rightSubTree;
            freqHash[currentHash]++;
            if(freqHash[currentHash]==2){
                duplicatTrees.push_back(currentNode);
            }
            return currentHash;
        }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        findDuplicate(root);
        return duplicatTrees;
    }
};


/**
* clear understanding this Problem=> like kiavave duplicate generate hocce..
* try to think something hashing....  formula we can apply if current node 2 and left=4 and right =7 . then my hash should work 
 string current = CurrentNode#leftsideNode#rightSideNode.
 => at frist go left => 4 and in this node left and right are null so my string
        => leftsideString = 4##
        => rightSideString= 7##
=> now after completng back to one step up which is 2. and now 2 has left right
     we got 2->left => 4## note:[got it hashed value]
     similarly 2->right => 7##
     now currentHash => 2#4###7##


     now we can maintain an freqencyarray for count hash
     map<string,int>freq;
     each time we will add this count like freq[currentHash]++;
     then finally we check if count equal 2 thnen store this currentNode in vector
     after check it out we can return vector of nodes
*
*/ 
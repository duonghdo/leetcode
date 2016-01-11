/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfsSym(root->left, root->right);
    }

    bool dfsSym(TreeNode* leftTree, TreeNode* rightTree){
    	if(!leftTree && !rightTree) return true;
    	else if(!leftTree || !rightTree) return false;
    	if(leftTree->val != rightTree->val) return false;
    	return dfsSym(leftTree->left, rightTree->right) 
    			&& dfsSym(leftTree->right, rightTree->left);
    }
};
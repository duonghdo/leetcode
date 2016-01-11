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
	// top down approach
	/*
    bool isBalanced(TreeNode* root) {
    	if(!root) return true;

        int left = treeHeight(root->left);
        int right = treeHeight(root->right);
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int treeHeight(TreeNode* root){
    	if(!root) return 0;
    	return max(treeHeight(root->left)+1, treeHeight(root->right)+1);
    }
    */

    // bottom up approach
    int dfsHeight(TreeNode* root){
    	if(!root) return 0;

    	int leftHeight = dfsHeight(root->left);
    	int rightHeight = dfsHeight(root->right);
    	if(leftHeight < 0 || rightHeight < 0 || abs(leftHeight - rightHeight) > 1)
    		return -1;
		else return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root){
    	return dfsHeight(root) + 1;
    }
};
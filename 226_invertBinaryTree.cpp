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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
        	TreeNode* tmp = Q.front();
        	Q.pop();
        	if(!tmp) continue;

        	TreeNode* tmpSwap = tmp->left;
        	tmp->left = tmp->right;
        	tmp->right = tmpSwap;

        	Q.push(tmp->left);
        	Q.push(tmp->right);
        }

        return root;
    }
};
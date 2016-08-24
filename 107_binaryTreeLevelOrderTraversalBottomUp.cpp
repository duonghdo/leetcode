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
	void levelOrder(vector<vector<int>> &result, TreeNode*node, int level){
		if(!node) return;
		if(level >= result.size()){
			result.push_back({});
		}
		result[level].push_back(node->val);
		levelOrder(result, node->left, level+1);
		levelOrder(result, node->right, level+1);
	}

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        levelOrder(result, root, 0);
        reverse(result.begin(), result.end());
        return result;
    }
};
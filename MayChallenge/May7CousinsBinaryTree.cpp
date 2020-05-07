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
	pair<int, TreeNode*> px = { -1,NULL }, py = { -1,NULL };
	TreeNode* parent = nullptr;
	void dfs(TreeNode* root, int x, int y, int depth)
	{
		if (root == NULL)
			return;
		if (root->val == x)
		{
			px.first = depth;
			px.second = parent;
		}
		if (root->val == y)
		{
			py.first = depth;
			py.second = parent;
		}
		parent = root;
		dfs(root->left, x, y, depth + 1);
		parent = root;
		dfs(root->right, x, y, depth + 1);

	}
public:
	bool isCousins(TreeNode* root, int x, int y) {
		dfs(root, x, y, 0);
		if (px.first != py.first)
			return false;
		if (px.second == py.second)
			return false;
		return true;
	}
};
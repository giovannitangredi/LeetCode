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
    TreeNode* f(TreeNode* node,int val)
    {
        if(node==nullptr)
            return nullptr;
        if(node->val<val)
        {
            if(!node->right)
                return node;
            else
                return f(node->right,val);
        }
        else
        {
            if(!node->left)
                return node;
            else
               return f(node->left,val);
        }
        return node;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)
            return nullptr;
       TreeNode* root=new TreeNode(preorder[0]);
        TreeNode* x=nullptr;
        for(int i=1;i<preorder.size();i++)
        {
            x=f(root,preorder[i]);
            if(x->val<preorder[i])
                x->right=new TreeNode(preorder[i]);
            else
                x->left=new TreeNode(preorder[i]);
        }
        return root;
    }
};
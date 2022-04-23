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
public:
    TreeNode* prev=NULL;TreeNode*first=NULL;TreeNode* second=NULL;
    void fixBST(TreeNode*root)
    {
         if(root==NULL)
        {
            return;
        }
        fixBST(root->left);
        if(prev!=NULL&&root->val<prev->val)
        {
            if(first==NULL)
            {
                first=prev;
            }
            second=root;
        }
        prev=root;
        fixBST(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL)
        {
            return;
        }
        fixBST(root);
       int x=first->val;
       first->val=second->val;
       second->val=x;
    }
};
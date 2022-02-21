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
    int res=0;
    int diameter(TreeNode* root)
    {
        if(root==NULL)
       {
           return 0;
       }
       
       int lh=diameter(root->left);
       int rh= diameter(root->right);
       
       res=max(res,1+lh+rh);
       return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x=diameter(root);
        return res-1;
    }
};
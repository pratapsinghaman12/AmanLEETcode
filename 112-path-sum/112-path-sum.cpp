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

   
    bool aman(TreeNode*root,int x,int sum)
    {
        if(root==NULL)
        {
            return false;
        }
        sum=sum+root->val;
        if(sum==x&&root->left==NULL&&root->right==NULL)
        {
            return true;
        }
        return aman(root->left,x,sum) || aman(root->right,x,sum);
    }
    bool hasPathSum(TreeNode* root, int x) {
        int sum=0;
        return aman(root,x,sum);
    }
};
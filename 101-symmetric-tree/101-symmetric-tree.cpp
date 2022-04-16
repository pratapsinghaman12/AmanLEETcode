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
    bool aman(TreeNode*a,TreeNode*b)
    {
        if(a==NULL&&b==NULL)
        {
            return true;
        }
        if(a!=NULL&&b!=NULL)
        {
            return(
            a->val==b->val&&
                aman(a->left,b->right)&&aman(a->right,b->left)
            );
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return aman(root,root);
    }
};
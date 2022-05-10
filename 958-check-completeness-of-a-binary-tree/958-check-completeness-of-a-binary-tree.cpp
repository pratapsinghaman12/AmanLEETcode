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
    int nofnode(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return nofnode(root->left)+nofnode(root->right)+1;
    }
    bool aman(TreeNode*root,int i,int count)
    {
        if(root==NULL)
        {
            return true;
        }
        if(i>=count)
        {
            return false;
        }
        else
        {
            bool left=aman(root->left,2*i+1,count);
            bool right=aman(root->right,2*i+2,count);
            return (left&&right);
        }
    }
    bool isCompleteTree(TreeNode* root) {
        int i=0;
        int count= nofnode(root);
        return aman(root,i,count);
    }
};
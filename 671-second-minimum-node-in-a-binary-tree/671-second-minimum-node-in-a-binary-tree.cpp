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
    set<int>ans;
    void aman(TreeNode* root)
    {
        if(root==NULL)
        {
            return ;
        }
        aman(root->left);
        ans.insert(root->val);
        aman(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        aman(root);
        ans.erase(ans.begin());
        if(ans.size()!=0)
        {
             return *(ans.begin());
        }
        return -1;
       
    }
};
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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long ans=0;
        while(!q.empty())
        {
            long n= q.size();
            long s=q.front().second;
            long e=q.back().second;
            ans=max(ans,e-s+1);
            for(int i=0;i<n;i++)
            {
                pair<TreeNode*,int>p=q.front();
                TreeNode*curr=p.first;
                long ind= p.second;
                q.pop();
                if(curr->left!=NULL)
                {
                    q.push({curr->left,2*ind+1});
                }
                if(curr->right!=NULL)
                {
                    q.push({curr->right,2*ind+2});
                }
            }
        }
        return ans;
    }
};
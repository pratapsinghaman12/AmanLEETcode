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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        queue<TreeNode*>q;
        stack<int>st;
        if(root==NULL)
        {
            return v;
        }
        
        q.push(root);
        bool reverse=false;
        vector<int>v1;
        while(q.empty()==false)
        {
            int count= q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode*curr=q.front();
                q.pop();
                if(reverse)
                {
                    st.push(curr->val);
                }
                else
                {
                    v1.push_back(curr->val);
                }
                
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                
                 if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
                
            }
            if(reverse)
            {
                while(st.empty()==false)
                {
                   v1.push_back(st.top());
                   st.pop(); 
                }
                
            }
            v.push_back(v1);
            v1.clear();
            reverse=!reverse;
        }
        return v;
    }
};
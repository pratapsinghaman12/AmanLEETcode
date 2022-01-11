/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
        {
            return NULL;
        }
        if(lists.size()==1)
        {
            return lists[0];
        }
        
        ListNode*dummy=new ListNode(0);
        ListNode*runner=dummy;
        
        auto comp=[](ListNode*&n1,ListNode*&n2)
        {
            return (n1->val > n2->val);
        };
        
         priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> q(comp);
        for(auto x:lists)
        {
            if(x!=NULL)
            {
                q.push(x);
            }
        }
        
        while(!q.empty())
        {
            ListNode*a=q.top();
            ListNode*next=a->next;
            ListNode*node=new ListNode(a->val);
            runner->next=node;
            runner=runner->next;
            q.pop();
            
            if(next)
            {
                q.push(next);
            }
        }
        runner->next=NULL;
        runner=dummy->next;
        delete dummy;
        return runner;
        
    }
};
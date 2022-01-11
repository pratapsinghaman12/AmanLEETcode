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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode*curr=head;
         ListNode*first=head;
         ListNode*second=head;
        int count=0;
        
      if(head==NULL||head->next==NULL)
      {
          return head;
      }
        
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        if(count<k)
        {
            return head;
        }
        int x=count-k+1;
        while(x!=1)
        {
            second=second->next;
            x--;
        }
        
        while(k!=1)
        {
            first=first->next;
           
            k--;
        }
        
        swap(first->val,second->val);
        return head;
    }
};
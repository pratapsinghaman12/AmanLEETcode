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
    void reorderList(ListNode* head) {
        
        ListNode*slow=head;
        ListNode*fast=head->next;
        
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*curr1=slow->next;
        slow->next=NULL;
        
          ListNode*prev=NULL;
        
         while(curr1!=NULL)
        {
            ListNode*temp=curr1->next;
            curr1->next=prev;
            prev=curr1;
            curr1=temp;
        }
        
         ListNode*b=prev;
         ListNode*a=head;
       
        
        ListNode*tail_a;
        ListNode*tail_b;

        while(b!=NULL)
        {
            tail_a=a->next;
            tail_b=b->next;
            a->next=b;
            b->next=tail_a;
            a=tail_a;
            b=tail_b;
        }
            
    }
};
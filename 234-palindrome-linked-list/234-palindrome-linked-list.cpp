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
    ListNode* amanrev(ListNode*head)
    {
        ListNode*a=head;
        ListNode*b=NULL;
        ListNode*temp=NULL;
        while(a!=NULL)
        {
           temp=a->next;
            a->next=b;
            b=a;
            a=temp;
        }
        return b;
    }
    bool isPalindrome(ListNode* head) {
         ListNode*fast=head;
        ListNode*slow=head;
        if(head==NULL||head->next==NULL)
        {
            return true;
        }
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*rev= amanrev(slow->next);
        ListNode*curr=head;
        while(rev!=NULL)
        {
            if(rev->val!=curr->val)
            {
                return false;
            }
            rev=rev->next;
            curr=curr->next;
        }
        return true;
    }
    
};
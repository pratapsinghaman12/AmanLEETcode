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
    ListNode* partition(ListNode* head, int x) {
        ListNode*dummyl= new ListNode();
        ListNode*dummyr= new ListNode();
        ListNode*taill=dummyl;
        ListNode*tailr=dummyr;
        
        while(head!=NULL)
        {
            if(head->val<x)
            {
                taill->next=head;
                taill=taill->next;
            }
            else
            {
                tailr->next=head;
                tailr=tailr->next;
            }
            head=head->next;
        }
        taill->next=dummyr->next;
        tailr->next=NULL;
        
        return dummyl->next;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode*curr=head;
        ListNode*dummy=new ListNode();
        dummy->next=head;
         ListNode*curr_n=dummy;
        int size=0;
        if(head==NULL)
        {
            return head;
        }
        while(curr!=NULL)
        {
            size++;
            curr=curr->next;
        }
        int x=size-k;
        for(int i=0;i<x;i++)
        {
            curr_n=curr_n->next;
        }
        ListNode*temp=curr_n->next;
        curr_n->next=temp->next;
        delete temp;
        return dummy->next;
        
        
    }
};
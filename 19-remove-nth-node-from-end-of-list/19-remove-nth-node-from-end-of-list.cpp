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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return head;
        }
        ListNode*curr=head;
        ListNode*temp=head;
        for(int i=0;i<n;i++)
        {
            if(curr==NULL)
            {
                return NULL;
            }
            curr=curr->next;
        }
        if(curr==NULL)
        {
             ListNode*s= head;
            head=head->next;
            delete s;
            return head;
        }
        while(curr->next!=NULL)
        {
            curr=curr->next;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
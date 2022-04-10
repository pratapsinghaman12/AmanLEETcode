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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len=0;
        for(ListNode*tem=head;tem!=NULL;tem=tem->next)
        {
            len++;
        }
        ListNode*curr=head;
        bool firsttime=true;
         ListNode*last=NULL;
                if(len<k)
            {
                return head;
            }
        while(curr!=NULL)
        {
            ListNode*first=curr;
            int count=0;
            ListNode*prev=NULL;
            while(curr!=NULL&&count<k)
            {
                ListNode*temp= curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
                count++;
                len--;
            }
          
            if(firsttime)
            {
                head=prev;
                firsttime=false;
            }
            else
            {
                last->next=prev;
            }
            last=first;
            if(len<k)
            {
                last->next=curr;
                return head;
            }
        }
        return head;
    }
};
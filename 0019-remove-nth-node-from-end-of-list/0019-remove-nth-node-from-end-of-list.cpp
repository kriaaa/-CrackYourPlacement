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
        // ListNode* pointer;
        // int count=1;
      
        // for(ListNode* pointer=head;pointer!=NULL;pointer->next)
        // {
        //     count=count+1;
        // }
        // int delnode=count-n;
        // for(int i=1,pointer=head;i<=delnode;pointer->next,i++);
        // pointer->next=pointer->next->next;
        // return head;

        ListNode* fast,*slow;
        fast=head;
        slow=head;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast==nullptr)
        return head->next;
        
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
        
        

        
    }
};
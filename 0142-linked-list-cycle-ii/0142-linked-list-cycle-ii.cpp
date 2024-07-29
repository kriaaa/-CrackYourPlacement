/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
        return nullptr;
        ListNode* slow,*fast,*entry;
        entry=slow=fast=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=entry)
                {  
                    entry=entry->next;
                    slow=slow->next;
                    
                }
                return entry;
            }
        }
        return nullptr;
    }
};
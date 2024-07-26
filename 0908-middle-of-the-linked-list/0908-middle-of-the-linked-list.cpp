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
   
    //     ListNode *current;
    //     long int size=1;
    //     for(current=head;current!=NULL;current->next)
    //     {
    //         size=size+1;
    //     }
    //     int middle=size/2;
    //     current=head;
    //     for(int i=1;i<middle;i++)
    //     {
    //         current=current->next;
    //     }
    //     return current;
        
    // }
     ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};
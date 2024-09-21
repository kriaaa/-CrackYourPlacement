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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1,*t2;
        t1=l1;
        t2=l2;
        ListNode* dummynode=new ListNode();
        int carry=0;
        ListNode* curr=dummynode;
        int sum;
        sum=carry;
        while(l1!=nullptr||l2!=nullptr)
        {
            sum=carry;
            if(l1)
            {
                sum+=l1->val;
            }
            if(l2)
            {
                sum+=l2->val;
            }

            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            curr->next=temp;
            curr=curr->next;

            if(l1)
            l1=l1->next;
            if(l2)
            l2=l2->next;
            
        }
        if(carry)
        {
            ListNode* node=new ListNode(carry);
            curr->next=node;
        }

        return dummynode->next;

    }


       
};
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
    ListNode* rev(ListNode *head){
        ListNode*pre=nullptr;
        ListNode*curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=rev(l1);
        l2=rev(l2);
        int carry=0;
        ListNode dummy(0);
        ListNode*curr=&dummy;
        while(l1||l2||carry){
            int x=(l1)?l1->val:0;
            int y=(l2)?l2->val:0;
            int value=x+y+carry;
            carry=value/10;
            curr->next=new ListNode(value%10);
            curr=curr->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return rev(dummy.next);
    }
};
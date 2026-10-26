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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;


        ListNode*curr=head;
        ListNode*pre=&dummy;

        while(curr!=nullptr){
            while(curr->next!=nullptr && curr->val==curr->next->val){
                curr=curr->next;
            }
            pre->next=curr;
            curr=curr->next;
            pre=pre->next;
        }
        return dummy.next;
    }
};
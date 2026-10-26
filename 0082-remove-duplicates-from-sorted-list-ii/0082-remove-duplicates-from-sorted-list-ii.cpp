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
        ListNode*temp=&dummy;
        while(curr!=nullptr){
            bool duplicate=false;
            while(curr->next!=nullptr && curr->val==curr->next->val){
                duplicate=true;
                curr=curr->next;
            }
            if(duplicate){
                temp->next=curr->next;
            }else{
                temp=curr;
            }
            curr=curr->next;

        }
        return dummy.next;
    }

};